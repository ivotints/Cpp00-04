/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 08:17:21 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/08 12:44:11 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
	private:
		int					_rawBits; // fixed-point number value
		static const int	_numberOfFractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &src);
		Fixed	&operator=(const Fixed &src);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

