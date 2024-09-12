/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 20:08:05 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/08 20:52:05 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	{
		ClapTrap default_;

		default_.attack("Monster");
		default_.takeDamage(0);
		default_.takeDamage(9);
		default_.beRepaired(111);
		default_.takeDamage(999);
		default_.beRepaired(111);
		default_.attack("Monster");
		default_.takeDamage(0);
	}
	std::cout << std::endl;
	{
		ClapTrap Boy2("Boy2");

		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.attack("Godzilla");
		Boy2.beRepaired(10);
		Boy2.takeDamage(0xfffffff9);
		Boy2.takeDamage(0xfffffff9);
		std::cout << std::endl;

		ClapTrap Boy3(Boy2);

		Boy3.attack("Bodzilla");
		Boy3.beRepaired(10);
		Boy3.takeDamage(0xfffffff9);
	}
	std::cout << std::endl;
	{
		ClapTrap Boy4("Boy4");
		ClapTrap Boy5;

		Boy5 = Boy4;
		Boy5.attack("Bodzilla");
		Boy5.beRepaired(10);
		Boy5.takeDamage(0xfffffff9);
	}

}
