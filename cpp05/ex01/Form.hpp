/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:35:06 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/16 11:20:25 by avelandr         ###   ########.fr       */
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

#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>
# include <string>

class Bureaucrat;

class Form {
	private:
		const std::string	_name;
		bool 				_issigned;
		const int			_grade_signed;
		const int			_grade_exect;

	public:
		Form(void);
		Form(const std::string name, int grade_signed, int grade_exect);
		Form(const Form &obj);
		Form &operator=(const Form &obj);
		~Form(void);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeSigned() const;
		int			getGradeExect() const;

		void		beSigned(const Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif
