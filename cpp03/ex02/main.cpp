/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:08:05 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/09 13:37:58 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Robot1;
	std::cout << std::endl;

	Robot1.attack("RA9");
	std::cout << std::endl;

	FragTrap Robot2(Robot1);
	std::cout << std::endl;

	Robot1.highFiveGuys();
	std::cout << std::endl;

	Robot2 = Robot1;
	std::cout << std::endl;

	Robot2.beRepaired(20);
	std::cout << std::endl;

	FragTrap Steve("Steve");
	std::cout << std::endl;

	Steve.takeDamage(900);
	std::cout << std::endl;
}
