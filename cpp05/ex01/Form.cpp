/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:48:02 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/21 16:28:50 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("default"), _issigned(false), _grade_signed(150), _grade_exect(150) {}

Form::Form(const std::string name, int grade_signed, int grade_exect) :
	_name(name), _issigned(false), _grade_signed(grade_signed), _grade_exect(grade_exect)
{
	if (grade_signed < 1 || grade_exect < 1)
		throw Form::GradeTooHighException();
	if (grade_signed > 150 || grade_exect > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src) :
	_name(src._name), _issigned(src._issigned), _grade_signed(src._grade_signed), _grade_exect(src._grade_exect) {}

Form &Form::operator=(const Form &rhs) {
	if (this != &rhs) {
		this->_issigned = rhs._issigned;
	}
	return *this;
}

Form::~Form() {}

std::string Form::getName() const {
	return this->_name;
}

bool Form::getIsSigned() const {
	return this->_issigned;
}

int Form::getGradeSigned() const {
	return this->_grade_signed;
}

int Form::getGradeExect() const {
	return this->_grade_exect;
}

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_grade_signed)
		this->_issigned = true;
	else
		throw Form::GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw() {
	return "Form grade is too high!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Form grade is too low!";
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
	os << "Form: " << obj.getName();
	if (obj.getIsSigned())
		os << " | Signed: Yes";
	else
		os << " | Signed: No";
	os << " | Req. sign: " << obj.getGradeSigned()
	   << " | Req. exec: " << obj.getGradeExect();
	return os;
}
