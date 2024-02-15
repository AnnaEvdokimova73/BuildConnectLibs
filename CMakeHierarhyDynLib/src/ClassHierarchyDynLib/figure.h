#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>

namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Figure {
    public:
        Figure() : sidesCount{ 0 }, name{ "Фигура:" } {}

        int getSidesCount();
        virtual void printInfo();

    protected:
        std::string name;
        int sidesCount;
    };
}