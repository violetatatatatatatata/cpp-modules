/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:57:35 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/22 12:28:51 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try {
        Bureaucrat b("Petrovska", 149);
        std::cout << b << std::endl;

        b.incrementGrade();
        b.decrementGrade();
    }
    catch (std::exception &e) {
        std::cerr << "Error! " << e.what() << std::endl;
    }

    std::cout << "----------------------" << std::endl;

    try {
        Bureaucrat limit("iborge-g", 150);
        std::cout << limit << std::endl;

        limit.decrementGrade();
	}
    catch (std::exception &e) {
        std::cerr << "Excepción: " << e.what() << std::endl;
    }

    return 0;
}
