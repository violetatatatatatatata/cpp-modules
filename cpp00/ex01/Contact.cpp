/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:52:02 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 16:34:48 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// constructor
Contact::Contact() {}

// destructor
Contact::~Contact() {}

//	setters
void Contact::setFirstName(std::string str)
{
    this->_firstName = str;
}

void Contact::setLastName(std::string str)
{
    this->_lastName = str;
}

void Contact::setNickname(std::string str)
{
	this->_nickname = str;
}

void Contact::setPhoneNumber(std::string str)
{
    this->_phoneNumber = str;
}

void Contact::setDarkestSecret(std::string str)
{
    this->_darkestSecret = str;
}

//	getters
std::string Contact::getFirstName() const
{
    return this->_firstName;
}

std::string Contact::getLastName() const
{
    return this->_lastName;
}

std::string Contact::getNickname() const
{
    return this->_nickname;
}

std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}
