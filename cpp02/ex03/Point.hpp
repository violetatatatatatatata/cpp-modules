/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:39:24 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/02 12:04:25 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
    public:
        Point( void );
        Point( const float x, const float y );
        Point( const Point &src );
        ~Point( void );
        Point &operator=( const Point &rhs );
        Fixed getX( void ) const;
        Fixed getY( void ) const;

    private:
        Fixed const _x;
        Fixed const _y;
};

#endif
