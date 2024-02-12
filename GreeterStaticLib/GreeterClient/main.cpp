#include <iostream>
#include "../Greeter.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    std::string name;
    std::cout << "¬ведите им€: ";
    std::cin >> name;
    GreeterLib::Greeter greeter;
    std::cout << greeter.greet(name) << std::endl;
}
