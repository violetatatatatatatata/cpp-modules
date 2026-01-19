/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.cpp											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/19 19:16:28 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/01/19 19:17:27 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "whatever.hpp"

/* Create a program that takes three parameters in the following order:
 * a filename and two strings, s1 and s2.
 * It must open the file <filename> and copy its content into a new file
 * <filename>.replace, replacing every occurrence of s1 with s2.
 * */

int main(int argc, char **argv)
{
	if (argc != 4 || !argv[1]) {
		std::cout << "error! ./executable [filename] [s1] [s2]" << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty()) {
		std::cerr << "error! the string to be replaced [s1] can't be empty." << std::endl;
		return 1;
	}
	std::string content;
	if (!readFile(filename, content))
		return 1;
	std::string modifiedContent = manualReplace(content, s1, s2);
	if (!writeFile(filename, modifiedContent))
		return 1;

	return 0;
}
