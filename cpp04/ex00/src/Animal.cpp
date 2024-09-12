/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:01 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/09 16:52:06 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called\n";
	type = "Unknown";
}

Animal::Animal(const std::string &type)
{
	std::cout << "Animal constructor with parmeter called\n";
	this->type = type;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called\n";
	*this = src;
}

Animal	&Animal::operator=(const Animal &src)
{
	std::cout << "Animal copy assignment operator called\n";
	if (this != &src)
		this->type = src.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
}

void	Animal::makeSound() const
{
	std::cout << type << ": cannot make sound.\n";
}

std::string		Animal::getType() const
{
	return (type);
}
