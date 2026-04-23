/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 12:11:09 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/23 12:20:55 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SWAP_MIN_MAX_HPP
# define SWAP_MIN_MAX_HPP

template <typename T>
void	swap(T &param1, T &param2)
{
	T tmp = param1;
	param1 = param2;
	param2 = tmp;
}

template <typename T>
T	min(T param1, T param2)
{
	if (param1 < param2)
		return param1;
	else
		return param2;
}

template <typename T>
T	max(T param1, T param2)
{
	if (param1 > param2)
		return param1;
	else
		return param2;
}

#endif
