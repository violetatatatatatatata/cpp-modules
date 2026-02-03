/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main_test.cpp										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/02/02 11:36:15 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/02/02 11:36:15 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(int argc, char **argv) {
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	
	Point p1(1, 1);
	std::cout << "P(1, 1) inside? ";
	if (bsp(a, b, c, p1))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	Point p2(10, 10);
	std::cout << "P(10, 10) inside? ";
	if (bsp(a, b, c, p2))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;
	
	Point p3(5, 0);
	std::cout << "P(5, 0) inside? ";
	if (bsp(a, b, c, p3))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	Point p4(0, 0);
	std::cout << "P(0, 0) inside? ";
	if (bsp(a, b, c, p4))
		std::cout << "TRUE" << std::endl;
	else
		std::cout << "FALSE" << std::endl;

	return 0;
}
