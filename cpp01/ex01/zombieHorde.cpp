/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 12:58:26 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/24 16:00:13 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie	*zombie_1 = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		std::ostringstream	ss;
		ss << name << "_" << i + 1;
		zombie_1[i].setName(ss.str());
	}
	return (zombie_1);
}
