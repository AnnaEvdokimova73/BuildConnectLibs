#pragma once

#ifdef QUADRILATERAL_EXPORTS
#define QUADRILATERAL_API __declspec(dllexport)
#else
#define QUADRILATERAL_API __declspec(dllimport)
#endif

#include <iostream>
#include "figure.h"

namespace FigureLib
{
    class QUADRILATERAL_API Quadrilateral : public Figure {
    public:
        Quadrilateral(int _a, int _b, int _c, int _d, int _A, int _B, int _C, int _D);

        int geta();
        int getb();
        int getc();
        int getd();
        int getA();
        int getB();
        int getC();
        int getD();

        virtual void printInfo() override;

    protected:
        int a, b, c, d;
        int A, B, C, D;
    };
}
