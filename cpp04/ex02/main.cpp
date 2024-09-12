/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivotints <ivotints@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 14:20:55 by ivotints          #+#    #+#             */
/*   Updated: 2024/09/10 16:41:22 by ivotints         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"


int main(void)
{
	Animal *zoo[2];
	const std::string *idea;

	for (int i = 0; i < 2; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
		zoo[i]->makeSound();
	}
	for (int i = 0; i < 2; i++)
		delete zoo[i];
	std::cout << std::endl;
	{
		Cat cat;
		idea = cat.getBrain()->getIdea(1);
		if (idea == NULL)
			std::cout << "Wrong idea number. Range is from 1 to 100\n";
		else
			std::cout << cat.getType() << " " << *idea << "\n";
		Cat cat2(cat);
		std::cout << cat.getBrain() << std::endl;
		std::cout << cat2.getBrain() << std::endl;
	}
	{
		std::cout << std::endl;
		Dog dog;
		idea = dog.getBrain()->getIdea(100);
		if (idea == NULL)
			std::cout << "Wrong idea number. Range is from 1 to 100\n";
		else
			std::cout << dog.getType() << " " << *idea << "\n";
		Dog dog2;
		dog2 = dog;
		std::cout << dog.getBrain() << std::endl;
		std::cout << dog2.getBrain() << std::endl;
	}
	//Animal animal;
}
