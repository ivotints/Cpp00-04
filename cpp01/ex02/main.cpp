/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:34:53 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/24 16:39:43 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*str_ptr = &str;
	std::string	&str_ref = str;

	std::cout << "Address: " << &str << std::endl;
	std::cout << "Address: " << str_ptr << std::endl;
	std::cout << "Address: " << &str_ref << std::endl;
	std::cout << "Value: " << str << std::endl;
	std::cout << "Value: " << *str_ptr << std::endl;
	std::cout << "Value: " << str_ref << std::endl;
	return (0);
}
