/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:24:13 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 15:25:40 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << YELLOW << "[Dog] Default Constructor called" << RESTORE << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	std::cout << YELLOW << "[Dog] Copy Constructor called" << RESTORE << std::endl;
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << YELLOW << "[Dog] Assignment Operator called" << RESTORE << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Dog::~Dog() {
	std::cout << YELLOW << "[Dog] Destructor called" << RESTORE << std::endl;
}

void Dog::makeSound() const {
	std::cout << YELLOW << "Woof Woof!" << RESTORE << std::endl;
}
