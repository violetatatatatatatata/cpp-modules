/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 16:32:10 by avelandr          #+#    #+#             */
/*   Updated: 2026/02/04 12:57:32 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# define ROSE    "\x1B[38;2;255;151;203m"
# define RESTORE "\x1b[0m"

class Brain
{
	public:
		std::string ideas[100];

		Brain();
		Brain(const Brain &src);
		Brain &operator=(const Brain &rhs);
		~Brain();
};

#endif
