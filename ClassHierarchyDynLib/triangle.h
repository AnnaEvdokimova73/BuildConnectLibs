#pragma once

#ifdef TRIANGLE_EXPORTS
#define TRIANGLE_API __declspec(dllexport)
#else
#define TRIANGLE_API __declspec(dllimport)
#endif

#include <iostream>
#include "figure.h"

namespace FigureLib
{
    class TRIANGLE_API Triangle : public Figure {
    public:
        Triangle(int _a, int _b, int _c, int _A, int _B, int _C);

        int geta();
        int getb();
        int getc();
        int getA();
        int getB();
        int getC();
        virtual void printInfo() override;

    protected:
        int a, b, c;
        int A, B, C;
    };
}