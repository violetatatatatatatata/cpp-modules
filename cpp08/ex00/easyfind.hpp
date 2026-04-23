/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:14:50 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/23 16:15:56 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>

template <typename T>
typename T::const_iterator easyfind(T &type, int num)
{
	typename T::const_iterator it = std::find(type.begin(), type.end(), num); 

	if (it == type.end())
		throw std::out_of_range("easyfind: value not found");

	return it;
}

#endif
