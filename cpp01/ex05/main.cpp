/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:55:04 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/26 19:59:36 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	h;
	if (ac != 2)
	{
		std::cerr << "Usage: ./harl <level>\n";
		return (1);
	}
	h.complain(av[1]);
	return (0);
}
