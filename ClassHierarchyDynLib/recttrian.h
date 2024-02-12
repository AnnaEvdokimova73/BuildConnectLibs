#pragma once

#ifdef RECTTRIAN_EXPORTS
#define RECTTRIAN_API __declspec(dllexport)
#else
#define RECTTRIAN_API __declspec(dllimport)
#endif

#include "triangle.h"

// Прямоугольный треугольник
namespace FigureLib
{
    class RECTTRIAN_API RectTrian : public Triangle {
    public:
        RectTrian(int _a, int _b, int _c, int _A, int _B);
    };
}