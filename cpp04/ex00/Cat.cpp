/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:26:41 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 15:27:47 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << GREEN << "[Cat] Default Constructor called" << RESTORE<< std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << GREEN << "[Cat] Copy Constructor called"<< RESTORE << std::endl;
	*this = src;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << GREEN << "[Cat] Assignment Operator called"<< RESTORE << std::endl;
	if (this != &rhs)
		Animal::operator=(rhs);
	return *this;
}

Cat::~Cat() {
	std::cout << GREEN << "[Cat] Destructor called" << RESTORE << std::endl;
}

void Cat::makeSound() const {
	std::cout << GREEN << "Meow Meow!" << RESTORE << std::endl;
}
