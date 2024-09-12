/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:01 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 11:50:31 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called\n";
	type = "Unknown";
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	std::cout << "WrongAnimal constructor with parmeter called\n";
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy constructor called\n";
	*this = src;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &src)
		this->type = src.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << type << ": cannot make Wrongsound.\n";
}

std::string		WrongAnimal::getType() const
{
	return (type);
}
