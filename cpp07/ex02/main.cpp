#include <iostream>
#include "Array.hpp"

static void tryIntegers(Array<int> &intArr)
{
	for (unsigned int i = 0; i < intArr.size(); i++)
		intArr[i] = i * 10;
	std::cout << "Int array: ";
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;
}

static void	tryDoubles()
{
	Array<double> doubleArr(3);
	doubleArr[0] = 1.1;
	doubleArr[1] = 2.2;
	doubleArr[2] = 3.3;
	std::cout << "Double array: ";
	for (unsigned int i = 0; i < doubleArr.size(); i++)
		std::cout << doubleArr[i] << " ";
	std::cout << std::endl;
}

static void tryStrings()
{
	Array<std::string> strArr(3);
	strArr[0] = "hello";
	strArr[1] = "world";
	strArr[2] = "!";
	std::cout << "String array: ";
	for (unsigned int i = 0; i < strArr.size(); i++)
		std::cout << strArr[i] << " ";
	std::cout << std::endl;
}

static void	tryCopy(Array<int> &intArr)
{
	Array<int> intArrCopy(intArr);
	intArrCopy[0] = 999;
	std::cout << "Original array: ";
	for (unsigned int i = 0; i < intArr.size(); i++)
		std::cout << intArr[i] << " ";
	std::cout << std::endl;
}

int main( void )
{
	Array<int> intArr(5);

	tryIntegers(intArr);
	tryDoubles();
	tryStrings();
	tryCopy(intArr);	

	try {
		std::cout << "Testing out of bounds: " << intArr[666] << std::endl;
	} catch (const std::exception &e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}

	return 0;
}
