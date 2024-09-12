/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 12:41:29 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/08 14:59:58 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void test(void)
{
	// Testing default constructor and toFloat() conversion
	Fixed a;
	std::cout << "Default constructor test: a is " << a << std::endl;

	// Testing integer constructor
	Fixed b(42);
	std::cout << "Integer constructor test: b is " << b << std::endl;

	// Testing float constructor
	Fixed c(42.42f);
	std::cout << "Float constructor test: c is " << c << std::endl;

	// Testing copy constructor
	Fixed d(c);
	std::cout << "Copy constructor test: d is " << d << std::endl;

	// Testing assignment operator
	Fixed e;
	e = b;
	std::cout << "Assignment operator test: e is " << e << std::endl;

	// Testing arithmetic operators
	Fixed f = b + c;
	std::cout << "Addition operator test: f is " << f << std::endl;

	Fixed g = c - b;
	std::cout << "Subtraction operator test: g is " << g << std::endl;

	Fixed h = b * c;
	std::cout << "Multiplication operator test: h is " << h << std::endl;

	Fixed i = c / b;
	std::cout << "Division operator test: i is " << i << std::endl;

	// Testing comparison operators
	std::cout << "Comparison tests: " << std::endl;
	std::cout << "b > c: " << (b > c) << std::endl;
	std::cout << "b < c: " << (b < c) << std::endl;
	std::cout << "b >= c: " << (b >= c) << std::endl;
	std::cout << "b <= c: " << (b <= c) << std::endl;
	std::cout << "b == e: " << (b == e) << std::endl;
	std::cout << "b != c: " << (b != c) << std::endl;

	// Testing increment/decrement operators
	std::cout << "Increment/Decrement tests: " << std::endl;
	Fixed j = ++a;
	std::cout << "Pre-increment: a is " << a << " and j is " << j << std::endl;

	Fixed k = a++;
	std::cout << "Post-increment: a is " << a << " and k is " << k << std::endl;

	Fixed l = --a;
	std::cout << "Pre-decrement: a is " << a << " and l is " << l << std::endl;

	Fixed m = a--;
	std::cout << "Post-decrement: a is " << a << " and m is " << m << std::endl;

	// Testing min/max functions
	Fixed n = Fixed::min(b, c);
	std::cout << "Min function test: n is " << n << std::endl;

	Fixed o = Fixed::max(b, c);
	std::cout << "Max function test: o is " << o << std::endl;

	// Testing chained assignment
	a = b = c = 42;
	std::cout << "Chained assignment test: a is " << a << ", b is " << b << ", c is " << c << std::endl;
}


int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	test();
	return (0);
}

