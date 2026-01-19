/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tests.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:12:07 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 20:16:55 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void createFile(const std::string& filename, const std::string& content) {
    std::ofstream file(filename.c_str());
    file << content;
    file.close();
}

void check(const std::string& expected) {
    std::string content;
    if (readFile("file.txt.replace", content)) {
        if (content == expected)
            std::cout << "ok" << std::endl;
        else
            std::cout << "ko (obtenido: '" << content << "')" << std::endl;
    } else {
        std::cout << "ko (no se pudo leer archivo de salida)" << std::endl;
    }
}

int main() {
    std::string prog = "./cppisforlosers";
    
    std::cout << "--- test 1: cambio simple ---" << std::endl;
    createFile("file.txt", "hola mundo");
    std::system((prog + " file.txt \"mundo\" \"caracola\"").c_str());
    check("hola caracola");

    std::cout << "--- test 2: multiples ocurrencias ---" << std::endl;
    createFile("file.txt", "test test test");
    std::system((prog + " file.txt \"test\" \"ok\"").c_str());
    check("ok ok ok");

    std::cout << "--- test 3: sin coincidencias ---" << std::endl;
    createFile("file.txt", "hola mundo");
    std::system((prog + " file.txt \"adios\" \"caracola\"").c_str());
    check("hola mundo");

    std::cout << "--- test 4: borrar palabra ---" << std::endl;
    createFile("file.txt", "hola mundo");
    std::system((prog + " file.txt \" mundo\" \"\"").c_str());
    check("hola");

    std::cout << "--- test 5: manejo de errores ---" << std::endl;
    
    if (std::system((prog + " no_existe.txt a b > /dev/null 2>&1").c_str()) != 0)
        std::cout << "ok (archivo no existe)" << std::endl;
    else std::cout << "ko" << std::endl;

    if (std::system((prog + " file.txt a > /dev/null 2>&1").c_str()) != 0)
        std::cout << "ok (args insuficientes)" << std::endl;
    else std::cout << "ko" << std::endl;

    if (std::system((prog + " file.txt \"\" b > /dev/null 2>&1").c_str()) != 0)
        std::cout << "ok (s1 vacio)" << std::endl;
    else std::cout << "ko" << std::endl;

    std::system("rm -f file.txt file.txt.replace");
    
    return 0;
}
