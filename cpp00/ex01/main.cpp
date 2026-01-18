/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 main.cpp											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/16 15:18:34 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/01/16 15:18:34 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main() {
	PhoneBook book;
	std::string command;

	while (true) {
		std::cout << "enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD") {
			book.addContact();
		} else if (command == "SEARCH") {
			book.searchContact();
		} else if (command == "EXIT") {
			break;
		} else {}
	}
	return 0;
}
