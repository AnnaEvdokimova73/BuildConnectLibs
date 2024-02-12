#include "Greeter.h"

namespace GreeterLib
{
	std::string Greeter::greet(std::string name)
	{
		std::string str = "Здравствуйте, " + name + "!";
		return str;
	}
}