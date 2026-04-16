/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 15:48:56 by avelandr          #+#    #+#             */
/*   Updated: 2026/03/24 14:32:15 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// constructor default
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

// destructor
Bureaucrat::~Bureaucrat() {}

// constructor
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name) {
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = grade;
}

// constructor de copia
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
    if (this != &rhs) {
        this->_grade = rhs._grade;
    }
    return *this;
}

// override del operador <<
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
    return os;
}

// getters
std::string	Bureaucrat::getName() const {
	return (this->_name); 
}

int	Bureaucrat::getGrade() const {
	return (this->_grade); 
}

// setter para modificar el valor de grade
void	Bureaucrat::setGrade(int value) {
	this->_grade = value;
}

// implementados
void Bureaucrat::incrementGrade() {
    if (_grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    _grade--;
	std::cout << "grade incremented! -1 \ncurrent: " << _grade << std::endl;
}

void Bureaucrat::decrementGrade() {
    if (_grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade++;
	std::cout << "grade decremented! +1 \ncurrent: " << _grade << std::endl;
}

//  override del what
const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is too low!";
}
