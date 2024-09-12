/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:20:40 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 13:51:20 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice &src) : AMateria(src)
{
	this->isTaken = false;
	*this = src;
}

Ice::~Ice(void) {}

// Functions

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

// Operators

Ice	&Ice::operator=(const AMateria &src)
{
	(void)src;
	return (*this);
}

Ice	&Ice::operator=(const Ice &src)
{
	(void)src;
	return (*this);
}

