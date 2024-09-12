/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:44:21 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 15:28:15 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(const Brain &src);
		Brain &operator=(const Brain &src);
		~Brain(void);

		const std::string	*getIdea(const unsigned int num) const;
};


