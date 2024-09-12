/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:39:03 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/01 11:12:13 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

//////Construct

AMateria::AMateria(std::string const & type) : type(type), isTaken(false) {}

AMateria::~AMateria(void) {}


//////////////////////////// Functions

std::string const & AMateria::getType() const
{
	return (this->type);
}

bool AMateria::getIsTaken() const
{
	return (this->isTaken);
}

void AMateria::setIsTaken()
{
	this->isTaken = true;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

////////// operators

AMateria &AMateria::operator=(const AMateria &src)
{
	if (this != &src)
		this->type = src.type;
	return (*this);
}
