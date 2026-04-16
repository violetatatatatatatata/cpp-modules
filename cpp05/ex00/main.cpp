/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:57:35 by avelandr          #+#    #+#             */
/*   Updated: 2026/03/24 14:33:06 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat b("Petrovska", 10);
	
	try {
		b.incrementGrade();
	} catch (std::exception e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	try {
		b.decrementGrade();
	} catch (std::exception e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}

	b.setGrade(150);
	try {
		b.decrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
	
	b.setGrade(-1);
	try {
		b.incrementGrade();
	} catch (std::exception &e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
