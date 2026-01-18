/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:45:14 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 19:06:24 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef
# define ZOMBIE_HPP

#include <iostream>

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

class Zombie {
	Zombie::Zombie(std::string	name) {
		this.->name = name;
	}
	Zombie::~Zombie() {}
	private:
		std::string	name;
	public:
		void	announce(std::string name);
}

#endif
