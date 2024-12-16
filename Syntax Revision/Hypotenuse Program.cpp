//Hypotenuse Calculator
//-By Sam

#include <iostream>
#include <cmath>

int main() {
    int perpendicular;
    int base;

    std::cout << "Hypotenuse Calculator- By Sam" << std::endl;
    std::cout << "Enter the perpendicular: " ;
    std::cin >> perpendicular;

    std::cout << "Enter the base: " ;
    std::cin >> base;

    double hypotenuse = sqrt(pow(perpendicular, 2) + pow(base, 2));

    std::cout << "The hypotenuse is: " << hypotenuse << std::endl;

    return 0;
}