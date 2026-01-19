/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:45:14 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 15:42:36 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string	name);
		~Zombie();
		
		void	announce(int i);
		void	setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif
