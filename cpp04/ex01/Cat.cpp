/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:26:41 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:47:01 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "[Cat] Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src) {
	this->_brain = new Brain(*src._brain);
	std::cout << "[Cat] Copy Constructor called (Deep Copy)" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "[Cat] Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "[Cat] Destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow Meow!" << std::endl;
}

void Cat::setIdea(int index, std::string idea) {
	if (index >= 0 && index < 100)
		this->_brain->ideas[index] = idea;
}

std::string Cat::getIdea(int index) const {
	if (index >= 0 && index < 100)
		return this->_brain->ideas[index];
	return "";
}
