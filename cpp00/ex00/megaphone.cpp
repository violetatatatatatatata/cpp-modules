/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avelandr <avelandr@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 14:36:11 by avelandr          #+#    #+#             */
/*   Updated: 2026/01/16 14:57:17 by avelandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

/* the line std::cout << std::endl; adds the endl char '\0'
 * */
int main(int argc, char **argv)
{
	int		i;
	size_t	j;

	if (argc == 1)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 1;
	while(i < argc)
	{
		j = 0;
		while(j < strlen(argv[i]))
		{
			std::cout<<(char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
