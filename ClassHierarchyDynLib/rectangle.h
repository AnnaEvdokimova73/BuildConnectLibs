#pragma once

#ifdef RECTANGLE_EXPORTS
#define RECTANGLE_API __declspec(dllexport)
#else
#define RECTANGLE_API __declspec(dllimport)
#endif

#include "parall.h"

// Прямоугольник
namespace FigureLib
{
    class RECTANGLE_API Rectangle : public Parall {
    public:
        Rectangle(int _a, int _b);
    };
}