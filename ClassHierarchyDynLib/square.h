#pragma once

#ifdef SQUARE_EXPORTS
#define SQUARE_API __declspec(dllexport)
#else
#define SQUARE_API __declspec(dllimport)
#endif

#include "rectangle.h"

// �������
namespace FigureLib
{
    class SQUARE_API Square : public Rectangle {
    public:
        Square(int _a);
    };
}