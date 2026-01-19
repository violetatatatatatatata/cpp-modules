/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:45:14 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 12:47:00 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		void	announce();
	Zombie(std::string	name);
	~Zombie();
};

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

#endif
