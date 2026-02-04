/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:54:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 15:58:45 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
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
