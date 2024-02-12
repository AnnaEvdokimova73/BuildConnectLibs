#include "header.h"

void printFigInfo(FigureLib::Figure* fig, int numb)
{
    fig->printInfo();
}


int main()
{
    setlocale(LC_ALL, "Russian");

    int a = 10, b = 20, c = 30, d = 40;
    int A = 50, B = 60, C = 70, D = 80;

    FigureLib::Triangle trian(a, b, c, A, B, C);
    FigureLib::RectTrian recTrian(a, b, c, A, B);
    FigureLib::IsoTrian isoTrian(a, b, A, B);
    FigureLib::EqualTrian eqTrian(a, A);

    FigureLib::Quadrilateral quad(a, b, c, d, A, B, C, D);
    FigureLib::Rectangle rect(a, b);
    FigureLib::Square squar(a);
    FigureLib::Parall par(a, b, A, B);
    FigureLib::Rhombus rhom(a, A, B);

    FigureLib::Figure* figs[9];
    figs[0] = &trian;
    figs[1] = &recTrian;
    figs[2] = &isoTrian;
    figs[3] = &eqTrian;
    figs[4] = &quad;
    figs[5] = &rect;
    figs[6] = &squar;
    figs[7] = &par;
    figs[8] = &rhom;

    int size = sizeof(figs) / sizeof(FigureLib::Figure*);

    for (int i = 0; i < size; ++i)
    {
        printFigInfo(figs[i], i);
    }
}
