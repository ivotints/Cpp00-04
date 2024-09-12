/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:56 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 12:59:33 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called\n";
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
}

void	Dog::makeSound() const
{
	std::cout << type << ": bark.\n";
}
