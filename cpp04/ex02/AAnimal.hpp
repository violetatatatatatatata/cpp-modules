/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:46:21 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 15:47:43 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

# define ORANGE  "\x1B[38;2;255;128;0m"
# define ROSE    "\x1B[38;2;255;151;203m"
# define GREEN   "\x1b[32m"
# define YELLOW  "\x1b[33m"
# define RESTORE "\x1b[0m"

class AAnimal
{
	protected:
		std::string type;

	public:
		AAnimal();
		AAnimal(const AAnimal &src);
		AAnimal &operator=(const AAnimal &rhs);
		virtual ~AAnimal();

		std::string getType() const;

		// = 0 convierte la función en pura y la clase en abstracta
		virtual void makeSound() const = 0; 
};

#endif
