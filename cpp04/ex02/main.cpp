/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:55:47 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 15:56:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// AAnimal test; 
	// AAnimal* test2 = new AAnimal();

	std::cout << "--- Abstract Class Test (Polymorphism works) ---" << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();

	std::cout << "\n--- Sounds ---" << std::endl;
	j->makeSound();
	i->makeSound();

	std::cout << "\n--- Deleting ---" << std::endl;
	delete j;
	delete i;

	return 0;
}
