/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:25:52 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/03 16:38:16 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* _brain;

	public:
		Cat();
		Cat(const Cat &src);
		Cat &operator=(const Cat &rhs);
		~Cat();

		void makeSound() const;
		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const;
};

#endif
