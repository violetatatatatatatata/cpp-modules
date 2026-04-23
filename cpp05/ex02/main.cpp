/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:40:53 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/22 12:40:37 by avelandr         ###   ########.fr       */
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
	Bureaucrat someone("Someone", 140);
	
	ShrubberyCreationForm shrub("Garden");
	RobotomyRequestForm robot("Arturito");
	PresidentialPardonForm pardon("Elpepe");

	std::cout << "\n--- Shrubbery ---" << std::endl;
	someone.executeForm(shrub);
	someone.signForm(shrub);
	someone.executeForm(shrub);
	boss.executeForm(shrub);

	std::cout << "\n--- Robotomy ---" << std::endl;
	someone.signForm(robot);
	boss.signForm(robot);
	someone.executeForm(robot);
	boss.executeForm(robot);
	boss.executeForm(robot);

	std::cout << "\n--- Presidential ---" << std::endl;
	boss.signForm(pardon);
	boss.executeForm(pardon);

	std::cout << std::endl;

	return EXIT_SUCCESS;
}
