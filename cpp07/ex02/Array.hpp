/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 14:28:30 by avelandr          #+#    #+#             */
/*   Updated: 2026/04/23 15:39:59 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	private:
		unsigned int 	_length;
		T* 				_arr;

	public:
		// • Construction with no parameter: Creates an empty array.
		Array() : _length(0), _arr(new T[0]) {}

		// • Construction with an unsigned int n as a parameter: Creates an array of n elements initialized by default.
		Array(unsigned int n) : _length(n), _arr(new T[n]) {}

		Array(const Array &other) : _length(other._length), _arr(new T[other._length])
		{
			for (unsigned int i = 0; i < _length; i++)
				_arr[i] = other._arr[i];
		}

		// • Construction by copy and assignment operator. In both cases, modifying either the original array or its copy after copying musn’t affect the other array.
		Array &operator=(const Array &other)
		{
			if (this == &other)
				return *this;
			delete[] _arr;
			_length = other._length;
			_arr = new T[_length];
			for (unsigned int i = 0; i < _length; i++)
				_arr[i] = other._arr[i];
			return *this;
		}

		~Array()
		{
			delete[] _arr;
		}

		unsigned int	size() const
		{
			return _length;
		}

		// When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.
		T& operator[](unsigned int i)
		{
			if (i >= _length)
				throw std::out_of_range("Index out of bounds");
			return _arr[i];
		}

		const T& operator[](unsigned int i) const
		{
			if (i >= _length)
				throw std::out_of_range("Index out of bounds");
			return _arr[i];
		}
};

#endif
