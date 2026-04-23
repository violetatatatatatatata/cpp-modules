/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:37:11 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/23 12:37:52 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>
#include <iostream>

template <typename T, typename F>
void	iter(T *arrAddress, const size_t arrLength, F func)
{
	for (size_t i = 0; i < arrLength; i++)
		func(arrAddress[i]);
}

#endif
