/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:32 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:23:54 by avelandr         ###   ########.fr       */
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
