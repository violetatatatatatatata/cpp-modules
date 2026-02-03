/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:38:02 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/02 11:39:06 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// value = (x2 - x1) * (y - y1) - (y2 - y1) * (x - x1)
static Fixed raw_calculation(Point const a, Point const b, Point const p)
{
	return (b.getX() - a.getX()) * (p.getY() - a.getY()) - 
		   (b.getY() - a.getY()) * (p.getX() - a.getX());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed val1, val2, val3;

	val1 = raw_calculation(a, b, point);
	val2 = raw_calculation(b, c, point);
	val3 = raw_calculation(c, a, point);
	
	bool all_positive = (val1 > 0) && (val2 > 0) && (val3 > 0);
	bool all_negative = (val1 < 0) && (val2 < 0) && (val3 < 0);
	
	return (all_positive || all_negative);
}
