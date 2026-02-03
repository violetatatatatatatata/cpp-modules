/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:19:28 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 15:34:26 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << ORANGE << "[Animal] Default Constructor called" << RESTORE << std::endl;
}

Animal::Animal(const Animal &src) {
	std::cout << ORANGE << "[Animal] Copy Constructor called" << RESTORE << std::endl;
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs) {
	std::cout << ORANGE << "[Animal] Assignment Operator called" << RESTORE << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal() {
	std::cout << ORANGE << "[Animal] Destructor called" << RESTORE<< std::endl;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makeSound() const {
	std::cout << ORANGE << "* Generic animal sound *" << RESTORE<< std::endl;
}
