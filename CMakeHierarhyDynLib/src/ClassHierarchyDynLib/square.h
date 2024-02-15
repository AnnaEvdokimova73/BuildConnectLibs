#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "rectangle.h"

//  вадрат
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Square : public Rectangle {
    public:
        Square(int _a);
    };
}