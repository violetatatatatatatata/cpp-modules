/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:16:50 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/02 11:17:27 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <cstdlib>
#include <cmath>

class Fixed
{
    public:
    Fixed(void);
    Fixed(const Fixed &fixp);
    Fixed(const int num);
    Fixed(const float num);
    Fixed &operator=(const Fixed &fixp);
    ~Fixed(void);
    
    void	setRawBits(int const raw);
    int		getRawBits(void) const;
    float	toFloat(void) const;
    int		toInt(void) const;

    private:
        int	fixedPoint;
        static const int bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);
