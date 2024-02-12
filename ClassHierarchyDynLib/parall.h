#pragma once

#ifdef PARALL_EXPORTS
#define PARALL_API __declspec(dllexport)
#else
#define PARALL_API __declspec(dllimport)
#endif

#include "quadrilateral.h"

// ֿאנאככוכמדנאלל
namespace FigureLib
{
    class PARALL_API Parall : public Quadrilateral {
    public:
        Parall(int _a, int _b, int _A, int _B);
    };
}