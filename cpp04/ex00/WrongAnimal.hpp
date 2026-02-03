/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:28:10 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:30:35 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

# define RED     "\x1b[35m"
# define ORANGE  "\x1B[38;2;255;128;0m"
# define ROSE    "\x1B[38;2;255;151;203m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define RESTORE "\x1b[0m"

/*	Without virtual, he compiler uses Static Binding. It looks at the pointer
 *	type (WrongAnimal*), not the actual object (WrongCat). Since the pointer is
 *	a WrongAnimal, the compiler decides at compile time to call WrongAnimal::makeSound().
 *	It ignores the fact that the object is actually a cat.
 * */

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		/*virtual*/ ~WrongAnimal();

		std::string getType() const;
		/*virtual*/ void makeSound() const;
};

#endif
