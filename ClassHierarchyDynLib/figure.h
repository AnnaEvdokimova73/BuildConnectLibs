#pragma once

#ifdef FIGURE_EXPORTS
#define FIGURE_API __declspec(dllexport)
#else
#define FIGURE_API __declspec(dllimport)
#endif

#include <iostream>
#include <string>

namespace FigureLib
{
    class FIGURE_API Figure {
    public:
        Figure() : sidesCount{ 0 }, name{ "Фигура:" } {}

        int getSidesCount();
        virtual void printInfo();

    protected:
        std::string name;
        int sidesCount;
    };
}