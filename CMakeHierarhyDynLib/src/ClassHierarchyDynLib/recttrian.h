#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "triangle.h"

// Прямоугольный треугольник
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API RectTrian : public Triangle {
    public:
        RectTrian(int _a, int _b, int _c, int _A, int _B);
    };
}