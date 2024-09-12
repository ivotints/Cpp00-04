/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:49:31 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 13:49:14 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &src)
		WrongAnimal::operator=(src);
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeSound() const
{
	std::cout << type << ": Wrongmeow.\n";
}
