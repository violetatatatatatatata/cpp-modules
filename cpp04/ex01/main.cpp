/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:58:32 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 13:02:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

int main()
{
	std::cout << YELLOW << "\nCreating and deleting 1 animal each" << std::endl;
	std::cout << "=======================================" << RESTORE << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	
	std::cout << YELLOW << "\nCreating and deleting N animals" << std::endl;
	std::cout << "=======================================" << RESTORE << std::endl;
	
	Animal* animals[NUM_ANIMALS];
	for (int k = 0; k < NUM_ANIMALS / 2; k++)
		animals[k] = new Dog();
	for (int k = NUM_ANIMALS / 2; k < NUM_ANIMALS; k++)
		animals[k] = new Cat();
	for (int k = 0; k < NUM_ANIMALS; k++)
		delete animals[k];

	std::cout << YELLOW << "\nGiving birth and killing a poor dog with ideas and feelings" << std::endl;
	std::cout << "=======================================" << RESTORE << std::endl;

	Dog basic;
	basic.setIdea(0, "food");
	std::cout << GREEN << ">> idea: " << basic.getIdea(0) << RESTORE << std::endl;

	return 0;
}
