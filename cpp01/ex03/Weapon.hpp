/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 17:44:28 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 18:02:15 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

/*	• A private attribute type, which is a string.
 *	• A getType() member function that returns a constant reference to type.
 *	• A setType() member function that sets type using the new value passed as
 *	  a parameter.
 * */

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string	_type);
		~Weapon();

	const std::string&  getType() const;	
	void setType(std::string name);	
};

#endif
