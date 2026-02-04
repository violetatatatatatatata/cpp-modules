/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:32:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 12:56:13 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << ROSE << "[Brain] Default Constructor called" << RESTORE << std::endl;
}

Brain::Brain(const Brain &src) {
	std::cout << ROSE << "[Brain] Copy Constructor called" <<  RESTORE << std::endl;
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs) {
	std::cout << "[Brain] Assignment Operator called" <<  RESTORE <<std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << ROSE << "[Brain] Destructor called" << RESTORE << std::endl;
}
