/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:20:40 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 13:48:13 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure &src) : AMateria(src)
{
	this->isTaken = false;
	*this = src;
}

Cure::~Cure(void) {}

// Functions

AMateria *Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

// Operators

Cure	&Cure::operator=(const AMateria &src)
{
	(void)src;
	return (*this);
}

Cure	&Cure::operator=(const Cure &src)
{
	(void)src;
	return (*this);
}

