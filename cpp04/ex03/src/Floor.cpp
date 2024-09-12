/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:15:15 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 12:36:52 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor() : list(NULL) {}

Floor::~Floor()
{
	cleanFloor();
}

/////Functions

Floor	&Floor::getInstance()
{
	static Floor instance;
	return (instance);
}

void	Floor::addMateria(AMateria *materia)
{
	MateriaList	*newMateria = new MateriaList;

	newMateria->materia = materia;
	newMateria->next = list;
	list = newMateria;
}

void	Floor::dropMateria(AMateria *materia)
{
	getInstance().addMateria(materia);
}

void	Floor::cleanFloor()
{
	MateriaList	*tmp;

	while (list)
	{
		tmp = list;
		list = list->next;
		delete tmp->materia;
		delete tmp;
	}
}

void	Floor::clean()
{
	getInstance().cleanFloor();
}
