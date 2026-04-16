/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:48:02 by avelandr          #+#    #+#             */
/*   Updated: 2026/03/25 12:50:09 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :
	_name("default"),
	_issigned(false),
	_grade_exect();
	_grade_signed();
{}

Form::~Form() {}

Form::Form(const std::string name, int grade) :  _name(name) {
	// tirar las excepciones
}

Form &Form::operator=(const Form &rhs) {
    if (this != &rhs) {
        this->_grade = rhs._grade;
    }
    return *this;
}
