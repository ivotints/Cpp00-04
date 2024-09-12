/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:12:06 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/09 16:51:40 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const std::string &type);
		Animal(const Animal &src);
		Animal	&operator=(const Animal &src);
		virtual ~Animal(void);

		virtual void	makeSound() const;
		std::string		getType() const;
};
