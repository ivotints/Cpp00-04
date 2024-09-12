/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:26:09 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/24 16:11:47 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie			*zombie;
	std::string			str;
	int					number;
	std::stringstream	ss;

	std::cout << "Enter amount of zombies: ";
	std::getline(std::cin, str);
	ss << str;
	ss >> number;
	if (ss.fail())
		std::cerr << "Faild to create number.\n";
	else
	{
		if (number > 99999)
		{
			std::cout << "Too big number. It is not safe to run it. Number decreased to 3\n";
			number = 3;
		}
		zombie = zombieHorde(number, "Zombie");
		for (int i = 0; i < number; i++)
			zombie[i].announce();
		delete [] zombie;
		return (0);
	}
	return (1);
}
