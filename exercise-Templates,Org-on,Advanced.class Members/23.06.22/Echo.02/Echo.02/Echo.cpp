#include "Echo.h"
#include <string>
#include <iostream>


void echo(const std::string& str)
{
	if (echoOn == true)
	{
	std::cout << str << '\n';
	}
}