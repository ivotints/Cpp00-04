/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:43:35 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/24 16:11:39 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <sstream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(void);
		Zombie(std::string Name);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
