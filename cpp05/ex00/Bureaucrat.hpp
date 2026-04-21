/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 14:54:18 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/21 15:32:57 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * A Bureaucrat must have:
	• A constant name.
	• A grade that ranges from 1 (highest possible grade) to 150 (lowest possible grade).
   Any attempt to instantiate a Bureaucrat with an invalid grade must throw an exception:
   either a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.

   You will provide getters for both attributes: getName() and getGrade().
   You must also implement two member functions to increment or decrement the bureaucrat’s grade.
   If the grade goes out of range, both functions must throw the same exceptions as the
   constructor.
 *
 * */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>

# define ORANGE  "\x1B[38;2;255;128;0m"
# define ROSE    "\x1B[38;2;255;151;203m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define RESTORE "\x1b[0m"

class Bureaucrat
{
	private:
		const std::string	_name;
		int 				_grade;
	
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat(void);
		
		std::string	getName() const;
		int			getGrade() const;

		void	setGrade(int value);
		
		void incrementGrade();
		void decrementGrade();

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
