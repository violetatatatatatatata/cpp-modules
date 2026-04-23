/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:37:02 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/23 12:40:50 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	incrementNumber(int& num) {
	num++;
}

void	printNumber(const int& num) {
	std::cout << num << std::endl;
}

void	toUpper(std::string &stri) {
	for (size_t i = 0; i < stri.length(); i++)
		stri[i] = std::toupper(static_cast<unsigned char>(stri[i]));
}

void	printString(const std::string &stri) {
	std::cout << stri << std::endl;
}

int main()
{
	int	nums[5] = {1, 2, 3, 4, 5};
	std::string strings[3] = {"Hola buenas", "adios a todos", "chau"};

	::iter(nums, 5, incrementNumber);
	::iter(nums, 5, printNumber);

	::iter(strings, 3, toUpper);
	::iter(strings, 3, printString);

	const std::string s[3] = {"Hola buenas", "adios a todos", "chau"};
	::iter(s, 3, printString);

	return 0;
}
