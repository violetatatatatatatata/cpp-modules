/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:54:12 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 16:05:08 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << ORANGE << "[Dog] Default Constructor called" << RESTORE << std::endl;
}

Dog::Dog(const Dog &src) : AAnimal(src) {
	this->_brain = new Brain(*src._brain);
	std::cout << "[Dog] Copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "[Dog] Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << ORANGE << "[Dog] Destructor called" << RESTORE << std::endl;
}

void Dog::makeSound() const {
	std::cout << ORANGE << "Woof Woof!" << RESTORE << std::endl;
}

void Dog::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		this->_brain->ideas[index] = idea;
}

std::string Dog::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return this->_brain->ideas[index];
	return "";
}
