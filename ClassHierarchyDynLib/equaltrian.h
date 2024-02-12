#pragma once

#ifdef EQUALTRIAN_EXPORTS
#define EQUALTRIAN_API __declspec(dllexport)
#else
#define EQUALTRIAN_API __declspec(dllimport)
#endif

#include "isotrian.h"

// Равносторонний треугольник
namespace FigureLib
{
    class EQUALTRIAN_API EqualTrian : public IsoTrian {
    public:
        EqualTrian(int _a, int _A);
    };
}