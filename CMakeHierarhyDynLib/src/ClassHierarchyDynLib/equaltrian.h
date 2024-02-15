#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "isotrian.h"

// Равносторонний треугольник
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API EqualTrian : public IsoTrian {
    public:
        EqualTrian(int _a, int _A);
    };
}