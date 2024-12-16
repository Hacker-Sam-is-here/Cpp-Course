//Maths Functions
//-By Sam

#include <iostream>
#include <cmath>


int main() {
    double x = 3;
    double y = 4;
    double z;

    z = std::max(x, y); //return max value
    z = std::min(x, y); //return min value
    z = pow(x, y); //return x^y
    z = sqrt(100); //return square root of x
    z = abs(-12); //return absolute value of -12
    z = round(3.14) ; //return rounded value of 3.14 = 3
    z = ceil(3.14) ; //return ceil value of 3.14 = 4
    z = floor(3.14) ; //return floor value of 3.14 = 3



    return 0;
}