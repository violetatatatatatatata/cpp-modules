/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 15:19:00 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/18 17:00:32 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* • PhoneBook
 *	◦ It has an array of contacts.
 *	◦ It can store a maximum of 8 contacts.
 *		- If the user tries to add a 9th contact,
 *		  replace the oldest one by the new one.
 *	◦ Please note that dynamic allocation is forbidden.
 * */
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <limits> 
#include <cstdlib>

class PhoneBook {
private:
	std::string	_truncate(std::string str);
    Contact 	_contacts[8]; 
	void    	showTable();
	void    	printContacts(int index);
    int     	_index; 
    int     	_totalSaved;
public:
    PhoneBook();
    ~PhoneBook();

    void addContact();
    void searchContact();
    void printContact(int index);
};

#endif
