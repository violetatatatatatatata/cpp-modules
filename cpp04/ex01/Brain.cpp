/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:32:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:34:59 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "[Brain] Default Constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << "[Brain] Copy Constructor called" << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "[Brain] Assignment Operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "[Brain] Destructor called" << std::endl;
}
