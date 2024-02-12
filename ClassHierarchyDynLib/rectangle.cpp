#include "rectangle.h"

namespace FigureLib
{
    Rectangle::Rectangle(int _a, int _b) :
        Parall(_a, _b, 90, 90)
    {
        this->name = "Прямоугольник:";
    }
}