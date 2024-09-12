/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:14:05 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 16:01:17 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain *_brain;

	public:
		Dog(void);
		Dog(const Dog &src);
		Dog	&operator=(const Dog &src);
		~Dog(void);

		void	makeSound() const;
		Brain	*getBrain(void) const;
};


