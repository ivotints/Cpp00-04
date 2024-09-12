/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:42:09 by ivotints          #+#    #+#             */
/*   Updated: 2024/08/26 18:55:38 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string	my_replace(std::string &input, const std::string &s1, const std::string &s2)
{
	size_t	pos = 0;

	while ((pos = input.find(s1, pos)) != std::string::npos)
	{
		input = input.substr(0, pos) + s2 + input.substr(pos + s1.length());
		pos += s2.length();
	}
	return (input);
}

int	check_arguments(int ac, char **av)
{
	if (ac != 4)
	{
		std::cerr << "Usage: ./replace <filename> <string_to_find> <string to replace>\n";
		return (1);
	}
	std::string	s1 = av[2];
	if (s1.empty())
	{
		std::cerr << "Error: <string_to_find> can not be empty\n";
		return (1);
	}
	return (0);

}

int	main(int ac, char** av)
{
	if (check_arguments(ac, av))
		return (1);

	std::string	new_name = av[1] + std::string(".replace");
	std::string	s1 = av[2];
	std::string	s2 = av[3];
	std::string	input;

	std::ifstream	file(av[1]);
	if (file.fail())
	{
		std::cerr << "Error. Could not open file " << av[1] << std::endl;
		return (2);
	}
	std::ofstream	new_file(new_name.c_str());
	if (new_file.fail())
	{
		std::cerr << "Error. Could not create file " << new_name << std::endl;
		return (2);
	}
	if (s1 == s2)
		new_file << file.rdbuf();
	else
	{
		while (std::getline(file, input))
			new_file << my_replace(input, s1, s2) << std::endl;
	}
	file.close();
	new_file.close();
	return (0);
}
