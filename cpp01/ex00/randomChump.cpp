/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 18:49:46 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 19:15:45 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include ""

// instanciado en el stack: muere antes del retorno
void randomChump(std::string name) {
	Zombie z(name);
	z.announce();
    std::cout << "good news mr. president! " name " is dead" << std::endl;

}
