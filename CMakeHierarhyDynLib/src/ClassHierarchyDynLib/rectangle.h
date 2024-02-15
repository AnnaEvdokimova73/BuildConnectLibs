#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "parall.h"

// Прямоугольник
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Rectangle : public Parall {
    public:
        Rectangle(int _a, int _b);
    };
}