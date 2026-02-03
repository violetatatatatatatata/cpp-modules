/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:24:13 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:37:46 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "[Dog] Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src) {
	this->_brain = new Brain(*src._brain);
	std::cout << "[Dog] Copy Constructor called (Deep Copy)" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs) {
	std::cout << "[Dog] Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);

		if (this->_brain)
			delete this->_brain; 

		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "[Dog] Destructor called" << std::endl;
}

void Dog::makeSound() const {
	std::cout << "Woof Woof!" << std::endl;
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
