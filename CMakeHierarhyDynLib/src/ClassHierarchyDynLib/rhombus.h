#pragma once

#ifdef CLASSHIERARCHYDYNLIB_EXPORTS
#define CLASSHIERARCHYDYNLIB_API __declspec(dllexport)
#else
#define CLASSHIERARCHYDYNLIB_API __declspec(dllimport)
#endif

#include "parall.h"

// Ромб
namespace FigureLib
{
    class CLASSHIERARCHYDYNLIB_API Rhombus : public Parall {
    public:
        Rhombus(int _a, int _A, int _B);
    };
}