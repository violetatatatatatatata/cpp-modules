/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:47:07 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 15:55:26 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("AAnimal") {
	std::cout << "[AAnimal] Default Constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src) {
	std::cout << "[AAnimal] Copy Constructor called" << std::endl;
	*this = src;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "[AAnimal] Assignment Operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "[AAnimal] Destructor called" << std::endl;
}

std::string AAnimal::getType() const {
	return this->type;
}
