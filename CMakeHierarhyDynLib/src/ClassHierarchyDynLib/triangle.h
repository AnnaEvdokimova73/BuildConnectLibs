#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include <iostream>
#include "figure.h"

namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Triangle : public Figure {
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