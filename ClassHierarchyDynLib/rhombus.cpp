#include "rhombus.h"

namespace FigureLib
{
    Rhombus::Rhombus(int _a, int _A, int _B) :
        Parall(_a, _a, _A, _B)
    {
        this->name = "Ромб:";
    }
}