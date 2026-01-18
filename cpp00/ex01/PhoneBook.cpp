/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 PhoneBook.cpp										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/01/18 16:51:14 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/01/18 16:51:17 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->_index = 0;
	this->_totalSaved = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	std::string input;
	Contact		newContact;

	std::cout << "Enter First Name: ";
	while (std::getline(std::cin, input) && input.empty())
		std::cout << "Error! this field can't be empty. Enter First Name: ";
	newContact.setFirstName(input);

	std::cout << "Enter Last Name: ";
	while (std::getline(std::cin, input) && input.empty())
		std::cout << "Error! this field can't be empty. Enter Last Name: ";
	newContact.setLastName(input);

	std::cout << "Enter Nickname: ";
	while (std::getline(std::cin, input) && input.empty())
		std::cout << "Error! this field can't be empty. Enter Nickname: ";
	newContact.setNickname(input);

	std::cout << "Enter Phone Number: ";
	while (std::getline(std::cin, input) && input.empty())
		std::cout << "Error! this field can't be empty. Enter Phone Number: ";
	newContact.setPhoneNumber(input);

	std::cout << "Enter Darkest Secret: ";
	while (std::getline(std::cin, input) && input.empty())
		std::cout << "Error! this field can't be empty. Enter Darkest Secret: ";
	newContact.setDarkestSecret(input);

	this->_contacts[this->_index % 8] = newContact;
	this->_index++;
	if (this->_totalSaved < 8)
		this->_totalSaved++;
	
	std::cout << "Contact saved!" << std::endl;
}

std::string PhoneBook::_truncate(std::string str) {
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::searchContact()
{
	std::string input;
	int index = -1;
	bool valid = false;

	if (this->_totalSaved == 0) {
		std::cout << "Phonebook is empty!" << std::endl;
		return;
	}
	showTable();
	while (!valid)
	{
		std::cout << "Enter index to display details: ";
		std::getline(std::cin, input);

		if (std::cin.eof())
			break; 

		if (input.empty())
		{
			std::cout << "Please, enter a number." << std::endl;
			continue;
		}
		index = std::atoi(input.c_str());
		if (index >= 1 && index <= this->_totalSaved) 
			valid = true;
		else
			std::cout << "Invalid index. Must be between 1 and " << this->_totalSaved << "." << std::endl;
	}
	if (valid)
	{
		printContacts(index);
		index--;
	}
}

void	PhoneBook::printContacts(int index)
{
	std::cout << "\n--- Contact Details ---" << std::endl;
	std::cout << "First Name:	 " << this->_contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name:	 " << this->_contacts[index].getLastName() << std::endl;
	std::cout << "Nickname:		 " << this->_contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number:  " << this->_contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:" << this->_contacts[index].getDarkestSecret() << std::endl;
}

void	PhoneBook::showTable()
{
	std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|  Index   |First Name|Last Name | Nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for (int i = 0; i < this->_totalSaved; i++) {
		std::cout << "|" << std::setw(10) << i + 1;
		std::cout << "|" << std::setw(10) << _truncate(this->_contacts[i].getFirstName());
		std::cout << "|" << std::setw(10) << _truncate(this->_contacts[i].getLastName());
		std::cout << "|" << std::setw(10) << _truncate(this->_contacts[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << " ------------------------------------------- " << std::endl;
}
