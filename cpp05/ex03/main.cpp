/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:59:48 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/22 12:56:08 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	AForm* a;
	AForm* b;
	AForm* c;
	AForm* fail;

	a = someRandomIntern.makeForm("robotomy request", "Alex Alto");
	b = someRandomIntern.makeForm("shrubbery creation", "Joancito Caganer");
	c = someRandomIntern.makeForm("presidential pardon", "Alba Ranita");
	fail = someRandomIntern.makeForm("unknown form", "Nadie");

	Bureaucrat boss("Boss", 1);

	std::cout << std::endl;
	if (a) {
		boss.signForm(*a);
		boss.executeForm(*a);
		delete a;
	}

	std::cout << std::endl;
	if (b) {
		boss.signForm(*b);
		boss.executeForm(*b);
		delete b;
	}
	std::cout << std::endl;
	
	if (c) {
		boss.signForm(*c);
		boss.executeForm(*c);
		delete c;
	}
	
	std::cout << std::endl;
	if (fail) {
		delete fail;
	}

	return 0;
}
