/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:49:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 14:26:00 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*	This function creates a zombie, names it, and makes it announce itself.
 * */
void randomChump(std::string name) {
	Zombie z(name);
	z.announce();
}
