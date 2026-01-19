/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:41:03 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 19:50:54 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

/*	- loop until we can no longer find 'search' in 'subject'
 * */
std::string manualReplace(std::string subject, const std::string& search,
		const std::string& replace) {
	size_t	pos = 0;
	size_t	found;
	
	if (search.empty()) {
	   return subject;
	}
	std::string result;
	while ((found = subject.find(search, pos)) != (std::string::npos)) {
		result.append(subject, pos, found - pos);
		result.append(replace);
		pos = found + search.length();
	}
	result.append(subject, pos, std::string::npos);
	
	return (result);
}

bool readFile(const std::string& filename, std::string& content) {
	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open()) {
		std::cerr << "error! " << filename << std::endl;
		return false;
	}
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	content = buffer.str();
	inputFile.close();
	return true;
}

bool	writeFile(const std::string& filename, const std::string& content)
{
	std::string outFilename = filename + ".replace";

	std::ofstream outputFile(outFilename.c_str());
	if (!outputFile.is_open()) {
		std::cerr << "error creating the file " << outFilename << std::endl;
		return false;
	}
	outputFile << content;
	outputFile.close();
	return true;
}
