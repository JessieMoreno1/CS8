#include <iostream>
#include <SFML/Graphics.hpp>
#include "Application.h"
#include "Calculator.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Calculator calc;
    calc.run();
    return 0;
}
