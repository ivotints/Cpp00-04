/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:14:02 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/23 18:32:20 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->id = 0;
}

PhoneBook::~PhoneBook(void) {}


std::string	PhoneBook::input(const std::string& field_name)
{
	std::string	input;

	while (input.empty())
	{
		std::cout << field_name << ": ";
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << field_name << " can't be empty.\n";
	}
	return (input);
}

void	PhoneBook::add(void)
{
	std::cout << "Please enter:\n";
	std::string	first_name = input("First name");
	std::string	last_name = input("Last name");
	std::string	nickname = input("Nickname");
	std::string	phone_number = input("Phone number");
	std::string	darkest_secret = input("Darkest secret");

	this->contacts[this->id % MAX_CONTACTS] = Contact(first_name, last_name, nickname, phone_number, darkest_secret);
	std::cout << "\033[32mContact saved.\033[0m\n";
	this->id++;
}

void	PhoneBook::printTable(void)
{
	std::cout << "        id|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->id && i < MAX_CONTACTS; i++)
	{
		std::cout << std::setw(10) << i << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_first_name()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_last_name()) << "|";
		std::cout << std::setw(10) << Contact::formatWidth(this->contacts[i].get_nickname()) << "\n";
	}
}

void	PhoneBook::search(void)
{
	std::string	id;

	if (this->id == 0)
	{
		std::cout << "No contacts.\n";
		return ;
	}
	this->printTable();
	while(1)
	{
		std::cout << "Select a contact id or press ENTER to return:\n";
		std::getline(std::cin, id);
		if (id.empty())
			return ;
		if (id.length() > MAX_CONTACTS / 10 + 1 || id[0] < '0' || id[0] > '7' || id[0] - '0' >= this->id)
			std::cout << "Invalid id. Try again\n";
		else
		{
			this->contacts[id[0] - '0'].printContact();
			this->printTable();
		}
	}
}
