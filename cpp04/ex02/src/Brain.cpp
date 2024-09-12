/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:55:20 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 16:06:04 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called\n";
	for (int i = 0; i < 100; i++)
	{
		std::stringstream ss;
		ss << "idea #" << (i + 1);
		_ideas[i] = ss.str();
	}
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called\n";
	*this = src;
}


Brain &Brain::operator=(const Brain &src)
{
	std::cout << "Brain copy assignment operator called\n";
	if (this != &src)
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = src._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

const std::string	*Brain::getIdea(const unsigned int num) const
{
	if (num && num <= 100)
		return (&_ideas[num - 1]);
	return (NULL);
}

