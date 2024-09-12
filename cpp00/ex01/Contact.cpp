/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:27:27 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/23 13:52:25 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

Contact::Contact(str FN, str LN, str NN, str PN, str DS) :
	firstName(FN), lastName(LN), nickname(NN), phoneNumber(PN), secret(DS) {}

void	Contact::printContact(void)
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Darkest secret: " << this->secret << std::endl;
}

std::string	Contact::formatWidth(std::string field)
{
	if (field.length() > 10)
	{
		field.resize(9);
		field.append(".");
	}
	return (field);
}

std::string	Contact::get_first_name(void)
{
	return (this->firstName);
}

std::string	Contact::get_last_name(void)
{
	return (this->lastName);
}

std::string	Contact::get_nickname(void)
{
	return (this->nickname);
}
