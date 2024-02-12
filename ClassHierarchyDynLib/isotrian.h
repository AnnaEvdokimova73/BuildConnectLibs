#pragma once

#ifdef ISOTRIAN_EXPORTS
#define ISOTRIAN_API __declspec(dllexport)
#else
#define ISOTRIAN_API __declspec(dllimport)
#endif

#include "triangle.h"

// Равнобедренный треугольник
namespace FigureLib
{
    class ISOTRIAN_API IsoTrian : public Triangle {
    public:
        IsoTrian(int _a, int _b, int _A, int _B);
    };
}