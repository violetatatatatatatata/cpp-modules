/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:19:44 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 20:26:43 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    std::cout << "--- se aproxima una gran horda de zombies! ---" << std::endl;
    std::cout << "testeando 5 zombies" << std::endl;
    int n = 5;
    Zombie *horde = zombieHorde(n, "franki");
    if (!horde) {
        std::cout << "error: horda null" << std::endl;
        return 1;
    }
    for (int i = 0; i < n; i++)
        horde[i].announce(i);
    std::cout << "borrando horda..." << std::endl;
    delete [] horde;
    std::cout << "ok" << std::endl << std::endl;

    std::cout << "--- se aproxima una gran horda de zombies! ---" << std::endl;
    std::cout << "testeando muchos zombies" << std::endl;
    n = 100;
    Zombie *big = zombieHorde(n, "zomb");

    if (big) {
        big[0].announce(0);
        big[n-1].announce(n-1);
        std::cout << "borrando..." << std::endl;
        delete [] big;
        std::cout << "ok" << std::endl << std::endl;
    } else {
        std::cout << "fallo al crear horda grande" << std::endl;
    }
    std::cout << "--- probando valores raros ---" << std::endl;

    Zombie *bad1 = zombieHorde(-5, "bad");
    if (!bad1) {
        std::cout << "ok (negativo devuelve null)" << std::endl;
    } else {
        std::cout << "cuidado: negativo devolvio puntero" << std::endl;
        delete [] bad1;
    }
    Zombie *bad2 = zombieHorde(0, "bad");
    if (!bad2) {
        std::cout << "ok (0 devuelve null)" << std::endl;
    } else {
        std::cout << "ojo: 0 devolvio puntero (valido en c++, pero limpialo)" << std::endl;
        delete [] bad2;
    }

    return 0;
}
