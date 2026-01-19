/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:55:20 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 16:59:52 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	It must allocate N Zombie objects in a single allocation. Then, it must
 *	initialize the zombies, giving each of them the name passed as a parameter.
 *	The function returns a pointer to the first zombie.
 * */

Zombie* zombieHorde( int N, std::string name )
{
	int	i = 0;

	Zombie* horde = new Zombie[N];
    while(i < N)
	{
		horde[i].setName(name);
		i++;
	}
	return horde;
}
