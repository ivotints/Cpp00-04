/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 10:02:07 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/23 13:50:06 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

//# include <string>
# include <iomanip>
# include <iostream>
typedef std::string str;

class Contact
{
	private:
		str firstName;
		str lastName;
		str nickname;
		str phoneNumber;
		str secret;

	public:
		Contact(void);
		~Contact(void);
		Contact(str FN, str LN, str NN, str PN, str DS);

		void				printContact(void);
		static std::string	formatWidth(std::string field);
		std::string			get_first_name(void);
		std::string			get_last_name(void);
		std::string			get_nickname(void);
};

#endif
