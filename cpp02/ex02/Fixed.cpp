/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:41:04 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/08 17:20:15 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0)
{
}

Fixed::Fixed(const int num)
{
	_rawBits = num << _numberOfFractionalBits;
}

Fixed::Fixed(const float num)
{
	_rawBits = roundf(num * (1 << _numberOfFractionalBits));
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed	&Fixed::operator=(const Fixed &src)
{
	if (this != &src)
		this->_rawBits = src._rawBits;
	return (*this);
}

Fixed::~Fixed(void)
{
}

int	Fixed::getRawBits(void) const
{
	return (_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	_rawBits = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_rawBits / (1 << _numberOfFractionalBits));
}

int	Fixed::toInt(void) const
{
	return (_rawBits >> _numberOfFractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &src)
{
	out << src.toFloat();
	return (out);
}

bool	Fixed::operator>(const Fixed &src) const
{
	return (this->_rawBits > src._rawBits);
}

bool	Fixed::operator<(const Fixed &src) const
{
	return (this->_rawBits < src._rawBits);
}

bool	Fixed::operator>=(const Fixed &src) const
{
	return (this->_rawBits >= src._rawBits);
}

bool	Fixed::operator<=(const Fixed &src) const
{
	return (this->_rawBits <= src._rawBits);
}

bool	Fixed::operator==(const Fixed &src) const
{
	return (this->_rawBits == src._rawBits);
}

bool	Fixed::operator!=(const Fixed &src) const
{
	return (this->_rawBits != src._rawBits);
}

Fixed	Fixed::operator+(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() + src.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() - src.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() * src.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &src) const
{
	return ((Fixed)(this->toFloat() / src.toFloat()));
}

Fixed	&Fixed::operator++(void)
{
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	this->_rawBits++;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	this->_rawBits--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}
