#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*dest++ = *src++);
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[13]; //include null
	char src[] = "hello world!";

	string_copy(dest, 13, src); //include null

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
