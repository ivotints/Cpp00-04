/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 14:15:52 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/23 13:50:14 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include "Contact.hpp"
# define MAX_CONTACTS 8

class PhoneBook
{
	private:
		Contact	contacts[MAX_CONTACTS];
		int		id;
		std::string	input(const std::string& field_name);
		void	printTable(void);

	public:
		PhoneBook();
		~PhoneBook();

		void	add(void);
		void	search(void);
};

#endif
