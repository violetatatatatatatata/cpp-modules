/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:29:33 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 15:34:21 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << RED << "[WrongAnimal] Default Constructor called" << RESTORE << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	std::cout << RED << "[WrongAnimal] Copy Constructor called" << RESTORE << std::endl;
	*this = src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << RED << "[WrongAnimal] Assignment Operator called" << RESTORE << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "[WrongAnimal] Destructor called" << RESTORE<< std::endl;
}

std::string WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << RED << "* Generic animal sound *" << RESTORE<< std::endl;
}
