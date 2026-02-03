/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:32 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:46:52 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const Animal* k = new Animal();
	std::cout << std::endl;

	std::cout << i->getType() << ": ";
	i->makeSound();
	
	std::cout << j->getType() << ": ";
	j->makeSound();
	
	std::cout << k->getType() << ": ";
	k->makeSound();

	delete i;
	delete j;
	delete k;

	std::cout << "\n=======================================" << std::endl;
	
	const WrongAnimal* x = new WrongCat();
	const WrongAnimal* y = new WrongAnimal();
	std::cout << std::endl;

	std::cout << x->getType() << ": ";
	x->makeSound();

	std::cout << y->getType() << ": ";
	y->makeSound();

	std::cout << std::endl;
	delete x;
	delete y;
	
	return 0;
}

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#define NUM_ANIMALS 4

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n=======================================" << std::endl;
	
	Animal* animals[NUM_ANIMALS];

	for (int k = 0; k < NUM_ANIMALS / 2; k++)
		animals[k] = new Dog();
	for (int k = NUM_ANIMALS / 2; k < NUM_ANIMALS; k++)
		animals[k] = new Cat();

	for (int k = 0; k < NUM_ANIMALS; k++)
		delete animals[k];

	std::cout << "\n=======================================" << std::endl;

	Dog basic;
	basic.setIdea(0, "food");
	{
		Dog tmp = basic;
		std::cout << "idea: " << basic.getIdea(0) << std::endl;
		std::cout << "idea: " << tmp.getIdea(0) << std::endl;

		tmp.setIdea(0, "I want to sleep");
		std::cout << ">> idea: " << tmp.getIdea(0) << std::endl;
		std::cout << ">> idea: " << basic.getIdea(0) << std::endl;
	}
	std::cout << "idea: " << basic.getIdea(0) << std::endl;

	return 0;
}
