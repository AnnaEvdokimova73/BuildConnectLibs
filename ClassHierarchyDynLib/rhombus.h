#pragma once

#ifdef RHOMBUS_EXPORTS
#define RHOMBUS_API __declspec(dllexport)
#else
#define RHOMBUS_API __declspec(dllimport)
#endif

#include "parall.h"

// Ромб
namespace FigureLib
{
    class RHOMBUS_API Rhombus : public Parall {
    public:
        Rhombus(int _a, int _A, int _B);
    };
}