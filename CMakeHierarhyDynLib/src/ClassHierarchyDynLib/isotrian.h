#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "triangle.h"

// Равнобедренный треугольник
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API IsoTrian : public Triangle {
    public:
        IsoTrian(int _a, int _b, int _A, int _B);
    };
}