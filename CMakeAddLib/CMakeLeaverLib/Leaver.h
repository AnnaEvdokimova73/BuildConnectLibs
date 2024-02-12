#pragma once

#ifdef LEAVERDYNLIB_EXPORTS
#define LEAVERDYNLIB_API __declspec(dllexport)
#else
#define LEAVERDYNLIB_API __declspec(dllimport)
#endif

#include <string>

namespace LeaverLib
{
	class Leaver
	{
	public:
		LEAVERDYNLIB_API std::string leave(std::string name);
	};
}