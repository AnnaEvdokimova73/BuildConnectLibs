#include "figure.h"

namespace FigureLib
{
    int Figure::getSidesCount()
    {
        return this->sidesCount;
    }

    void Figure::printInfo()
    {
        std::cout << this->name << std::endl;
        std::cout << "���������� ������: " << this->getSidesCount() << std::endl;
    }
}