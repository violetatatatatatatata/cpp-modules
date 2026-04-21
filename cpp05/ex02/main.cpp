/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:40:53 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/16 11:51:17 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main(void) {
	std::srand(std::time(NULL));

	Bureaucrat boss("Boss", 1);
	Bureaucrat intern("Intern", 140);
	
	ShrubberyCreationForm shrub("Garden");
	RobotomyRequestForm robot("Arturito");
	PresidentialPardonForm pardon("Elpepe");

	std::cout << "\n--- Shrubbery ---" << std::endl;
	intern.executeForm(shrub);
	intern.signForm(shrub);
	intern.executeForm(shrub);
	boss.executeForm(shrub);

	std::cout << "\n--- Robotomy ---" << std::endl;
	intern.signForm(robot);
	boss.signForm(robot);
	intern.executeForm(robot);
	boss.executeForm(robot);
	boss.executeForm(robot);

	std::cout << "\n--- Presidential ---" << std::endl;
	boss.signForm(pardon);
	boss.executeForm(pardon);

	std::cout << std::endl;

	return 0;
}
