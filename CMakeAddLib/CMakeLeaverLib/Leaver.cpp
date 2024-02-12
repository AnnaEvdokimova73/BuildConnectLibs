#include "Leaver.h"

namespace LeaverLib
{
	std::string Leaver::leave(std::string name)
	{
		std::string str = "До свидания, " + name + "!";
		return str;
	}
}