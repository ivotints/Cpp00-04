/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:56 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 16:01:30 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	_brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	std::cout << "Dog copy constructor called\n";
	_brain = new Brain(*src._brain);
}

Dog	&Dog::operator=(const Dog &src)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &src)
		{
			Animal::operator=(src);
			delete this->_brain;
			this->_brain = new Brain(*src._brain);
		}
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
	delete _brain;

}

void	Dog::makeSound() const
{
	std::cout << type << ": bark.\n";
}

Brain	*Dog::getBrain(void) const
{
	return (_brain);
}
