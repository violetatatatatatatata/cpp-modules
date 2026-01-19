/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:03:32 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 17:32:21 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/*	&str: La dirección real donde vive el texto.
 *	stringPTR: El puntero almacena la dirección de str.
 *	&stringREF: Como la referencia es un alias, si pides su dirección,
 *		te da la dirección de str.
 *	str: Imprime el texto normal.
 *	*stringPTR: El asterisco desreferencia el puntero (va a la dirección
 *		guardada y lee lo que hay ahí).
 *	stringREF: Se usa exactamente igual que la variable original. No hace
 *		falta poner
 * */
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "memory address of the string variable: " << &str << std::endl;
    std::cout << "memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF:      " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "value of the string variable:  " << str << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
