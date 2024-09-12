/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:31 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 16:01:08 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	std::cout << "Cat copy constructor called\n";
	_brain = new Brain(*src._brain);
}

Cat	&Cat::operator=(const Cat &src)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this != &src)
		{
			Animal::operator=(src);
			delete this->_brain;
			this->_brain = new Brain(*src._brain);
		}
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
	delete _brain;
}

void	Cat::makeSound() const
{
	std::cout << type << ": meow.\n";
}

Brain	*Cat::getBrain(void) const
{
	return (_brain);
}
