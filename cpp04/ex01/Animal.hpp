/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:18:32 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:35:39 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

# define ORANGE  "\x1B[38;2;255;128;0m"
# define ROSE    "\x1B[38;2;255;151;203m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define RESTORE "\x1b[0m"

/*	With virtual, the compiler uses Dynamic Binding. When the compiler sees virtual
 *	void makeSound(), it knows not to trust the pointer type immediately. Instead,
 *	at runtime, it checks what type of object is actually in memory. It sees that
 *	the object is a Cat, so it calls Cat::makeSound().
 *	
 *	In summary, when "virtual" is called the compiler focuses on the actual object
 *	not the pointer
 * */

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
};

#endif
