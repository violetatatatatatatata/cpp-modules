/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:55:06 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 16:05:33 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << GREEN << "[Cat] Default Constructor called" << RESTORE << std::endl;
}

Cat::Cat(const Cat &src) : AAnimal(src) {
	this->_brain = new Brain(*src._brain);
	std::cout << "[Cat] Copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs) {
	std::cout << "[Cat] Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		AAnimal::operator=(rhs);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << GREEN << "[Cat] Destructor called"<< RESTORE << std::endl;
}

void Cat::makeSound() const {
	std::cout << GREEN << "Meow Meow!" << RESTORE << std::endl;
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
