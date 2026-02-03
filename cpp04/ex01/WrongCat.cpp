/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:32:51 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 15:58:14 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	this->type = "WrongCat";
	std::cout << ROSE << "[WrongCat] Default Constructor called" << RESTORE<< std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << ROSE << "[WrongCat] Copy Constructor called"<< RESTORE << std::endl;
	*this = src;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	std::cout << ROSE << "[WrongCat] Assignment Operator called"<< RESTORE << std::endl;
	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << ROSE << "[WrongCat] Destructor called" << RESTORE << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << ROSE << "Meow Meow!" << RESTORE << std::endl;
}
