#include "equaltrian.h"

namespace FigureLib
{
    EqualTrian::EqualTrian(int _a, int _A) :
        IsoTrian(_a, _a, _A, _A)
    {
        this->name = "Равносторонний треугольник:";
    }
}