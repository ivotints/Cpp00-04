/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:31 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 13:49:09 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called\n";
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &src)
		Animal::operator=(src);
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

void	Cat::makeSound() const
{
	std::cout << type << ": meow.\n";
}
