/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 11:41:33 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/16 11:51:14 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default_target") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm(obj), _target(obj._target) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	if (this != &rhs) {
		AForm::operator=(rhs);
		this->_target = rhs._target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::performAction() const {
	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());

	if (file.is_open()) {
		file << "               ,@@@@@@@," << std::endl;
		file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
		file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
		file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
		file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
		file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
		file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
		file << "       |o|        | |         | |" << std::endl;
		file << "       |.|        | |         | |" << std::endl;
		file << "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
		file.close();
	}
}
