#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "quadrilateral.h"

// ֿאנאככוכמדנאלל
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Parall : public Quadrilateral {
    public:
        Parall(int _a, int _b, int _A, int _B);
    };
}