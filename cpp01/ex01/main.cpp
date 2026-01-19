/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 19:06:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 16:59:47 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int argc, char **argv)
{
	int N_zombies;
	int	i = 0;

	if (argc != 3 || !argv[1]) {
		std::cout << "usage: ./horde [name] [N_zombies]" << std::endl;
		return (1);
	}
	N_zombies = atoi(argv[2]);
	if (N_zombies <= 0 || !argv[2])
		return 1;
	Zombie* z = zombieHorde(N_zombies, argv[1]);
    while(i < N_zombies)
    {
        z[i].announce(i);
        i++;
    }
	
    delete[] z;
    return 0;
}
