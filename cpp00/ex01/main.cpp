/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:13:50 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/23 18:24:19 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "*Welcome*\n";
	while (1)
	{
		std::cout << "Available commands: ADD, SEARCH, EXIT\n";
		std::cout << "> ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break ;
		else
			std::cout << "No such a command.\n";
	}
	std::cout << "Goodbye!\n";
	return (0);
}
