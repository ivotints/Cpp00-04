/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 11:38:56 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 12:14:03 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &src)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	*this = src;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

///// Function

std::string const & Character::getName(void) const
{
	return (name);
}

void	Character::equip(AMateria *m)
{
	if (!m || m->getIsTaken())
		return (std::cout << "Materia has already been taken\n", void());
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			m->setIsTaken();
			return ;
		}
	}
	m->setIsTaken();
	Floor::dropMateria(m);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		Floor::dropMateria(inventory[idx]);
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
		inventory[idx]->use(target);
}

///// Operator

Character	&Character::operator=(const Character &src)
{
	if (this != &src)
	{
		name = src.name;
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete inventory[i];
			if (src.inventory[i])
				inventory[i] = src.inventory[i]->clone();
		}
	}
	return (*this);
}
