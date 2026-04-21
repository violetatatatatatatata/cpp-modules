/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 14:59:48 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/21 15:01:58 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int	main()
{
	Intern someRandomIntern;
	AForm* rrf;
	AForm* scf;
	AForm* ppf;
	AForm* fail;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	scf = someRandomIntern.makeForm("shrubbery creation", "Garden");
	ppf = someRandomIntern.makeForm("presidential pardon", "Fry");
	fail = someRandomIntern.makeForm("unknown form", "Nobody");

	std::cout << "\n--- BUREAUCRAT ACTIONS ---" << std::endl;
	Bureaucrat boss("The Boss", 1);

	if (rrf) {
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}
	
	if (scf) {
		boss.signForm(*scf);
		boss.executeForm(*scf);
		delete scf;
	}
	
	if (ppf) {
		boss.signForm(*ppf);
		boss.executeForm(*ppf);
		delete ppf;
	}
	
	if (fail) {
		delete fail;
	}

	return 0;
}
