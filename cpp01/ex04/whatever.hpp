/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 19:21:37 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/19 20:12:48 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib> 

std::string manualReplace(std::string subject, const std::string& search,
        const std::string& replace);
bool	readFile(const std::string& filename, std::string& content);
bool	writeFile(const std::string& filename, const std::string& content);

#endif
