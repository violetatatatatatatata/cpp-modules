/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:54:23 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 19:15:48 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ""

// instanciado en el heap
Zombie*	newZombie(std::string name) {
	Zombie z(name);
	return (z);
}
