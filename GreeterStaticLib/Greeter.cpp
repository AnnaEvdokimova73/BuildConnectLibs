#include "Greeter.h"

namespace GreeterLib
{
	std::string Greeter::greet(std::string name)
	{
		std::string str = "������������, " + name + "!";
		return str;
	}
}