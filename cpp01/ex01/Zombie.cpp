/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 Zombie.cpp											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/18 18:54:23 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/01/19 12:23:44 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(std::string	name) {
	this->_name = name;
} 

Zombie::~Zombie() {
    std::cout << "good news mr. president! " << this->_name << " is dead" << std::endl;
}

void Zombie::setName(std::string name) {
    this->_name = name;
}

void Zombie::announce(int i) {
	std::cout << this->_name << " " << i << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
