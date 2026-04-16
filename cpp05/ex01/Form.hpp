/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:35:06 by avelandr          #+#    #+#             */
/*   Updated: 2026/03/25 12:31:38 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Let’s create a Form class. It has:
	• A constant name.
	• A boolean indicating whether it is signed (at construction, it is not).
	• A constant grade required to sign it.
	• A constant grade required to execute it.
All these attributes are private, not protected.
The grades of the Form follow the same rules as those of the Bureaucrat. Thus, the
following exceptions will be thrown if a form’s grade is out of bounds:
Form::GradeTooHighException and Form::GradeTooLowException.
As before, write getters for all attributes and overload the insertion («) operator to
print all the form’s information.
*/

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Bureaucrat.hpp"

class Form {
	private:
		const std::string	_name;
		bool 				_issigned;
		const int			_grade_exect;
		const int			_grade_signed;
	
	public:
		Bureaucrat(void);								// constructor default
		Bureaucrat(std::string name, int grade);		// constructor
        ~Bureaucrat(void);								// destructor
		Bureaucrat(const Bureaucrat &obj);				// nomeacuerdo
        Bureaucrat &operator=(const Bureaucrat &obj);	// operador de copia
		
		std::string	getName() const;
		int			getGrade() const;
		int			getGradeExecution() const;
		int			getGradeSigned() const;
		bool		getStatus() const;
		
		void		setGradeExecution(int grade_exect) const;
		void		setGradeSigned(int grade_signed) const;

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};	
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif
