/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:36:41 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/09 13:37:10 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap default constructor called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap constructor with parameter called\n";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called\n";
}

FragTrap	&FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignment operator called\n";
	if (this != &src)
		ClapTrap::operator=(src);
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap asks for a high five!\n";
}
