/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ScalarConverter.cpp								:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: avelandr <avelandr@student.42barcelon		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/04/22 14:44:35 by avelandr		   #+#	  #+#			  */
/*	 Updated: 2026/04/22 15:03:55 by avelandr		  ###	########.fr		  */
/*																			  */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

enum Type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO,
	ERROR
};

ScalarConverter::ScalarConverter(void) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void) other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
	(void) other;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {}

static Type detectType(const std::string &literal)
{
	size_t end;
	size_t i;
	size_t limit;
	bool hasF;
	const std::string pseudoLits[6] = {"nan", "nanf", "+inf", "-inf", "+inff", "-inff"};
	const size_t len = literal.length();
	const size_t separator = literal.find('.');

	for (i = 0; i < 6; i++)
		if (literal == pseudoLits[i])
			return PSEUDO;
	if (len == 3 && literal[0] == '\'' && literal[2] == '\'')
	{
		if (isascii(literal[1]))
			return CHAR;
		return ERROR;
	}
	if (separator != std::string::npos)
	{
		if (separator == 0 || separator == len - 1)
			return ERROR;
		if (literal[len - 1] == 'f')
			end = len - 1;
		else
			end = len;
		for (i = separator + 1; i < end; i++)
			if (!isdigit(literal[i]))
				return ERROR;
		if (literal[len - 1] == 'f' && separator == len - 2)
			return ERROR;
		if (literal[len - 1] == 'f')
			return FLOAT;
		return DOUBLE;
	}
	i = 0;
	hasF = (literal[len - 1] == 'f' && len - 1 != i);
	if (literal[0] == '-' || literal[0] == '+')
		i = 1;
	if (hasF)
		limit = len - 1;
	else
		limit = len;

	for (size_t j = i; j < limit; j++) {
		if (!isdigit(literal[j]))
			return ERROR;
	}
	if (hasF)
		return FLOAT;
	return INT;
}

static void printChar(const std::string &literal, Type type)
{
	double value;
	
	if (type == PSEUDO)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	if (type == CHAR)
		value = literal[1];
	else
		value = std::strtod(literal.c_str(), NULL);
	if (value < 0 || value > 127)
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	char c = static_cast<char>(value);
	if (!isprint(c))
	{
		std::cout << "char: Non displayable" << std::endl;
		return ;
	}
	std::cout << "char: '" << c << "'" << std::endl;
}

static void printInt(const std::string &literal, Type type)
{
	double value;
	
	if (type == PSEUDO)
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	if (type == CHAR)
		value = literal[1];
	else
		value = std::strtod(literal.c_str(), NULL);
	if (value < static_cast<double>(std::numeric_limits<int>::min())
		|| value > static_cast<double>(std::numeric_limits<int>::max()))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	std::cout << "int: " << static_cast<int>(value) << std::endl;
}

static void printFloat(const std::string &literal, Type type)
{
	double value;
	float f;

	if (type == PSEUDO)
	{
		if (literal == "nan" || literal == "nanf")
			std::cout << "float: nanf" << std::endl;
		else if (literal == "+inf" || literal == "+inff")
			std::cout << "float: +inff" << std::endl;
		else if (literal == "-inf" || literal == "-inff")
			std::cout << "float: -inff" << std::endl;
		return ;
	}
	if (type == CHAR)
		value = literal[1];
	else
		value = std::strtod(literal.c_str(), NULL);
	
	f = static_cast<float>(value);
	
	if (std::isinf(f))
	{
		if (f > 0)
			std::cout << "float: +inff" << std::endl;
		else
			std::cout << "float: -inff" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
}

static void printDouble(const std::string &literal, Type type)
{
	double value;
	
	if (type == PSEUDO)
	{
		if (literal == "nan" || literal == "nanf")
			std::cout << "double: nan" << std::endl;
		else if (literal == "+inf" || literal == "+inff")
			std::cout << "double: +inf" << std::endl;
		else if (literal == "-inf" || literal == "-inff")
			std::cout << "double: -inf" << std::endl;
		return ;
	}
	if (type == CHAR)
		value = static_cast<double>(literal[1]);
	else
		value = std::strtod(literal.c_str(), NULL);

	if (std::isinf(value))
	{
		if (value > 0)
			std::cout << "double: +inf" << std::endl;
		else
			std::cout << "double: -inf" << std::endl;
	}
	else
		std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
}

void ScalarConverter::convert(const std::string &literal)
{
	Type type = detectType(literal);
	if (type == ERROR)
	{
		std::cerr << "Error: unrecognized literal" << std::endl; 
		return ;
	}
	printChar(literal, type);
	printInt(literal, type);
	printFloat(literal, type);
	printDouble(literal, type);
}
