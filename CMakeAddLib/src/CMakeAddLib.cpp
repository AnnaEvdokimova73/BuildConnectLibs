#include <iostream>
#include "CMakeAddLib.h"
#include "LeaverDynLib/Leaver.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    LeaverLib::Leaver leaver;
    std::cout << leaver.leave(name) << std::endl;
}

