//Chapter 6 - Type Conversion
//-By Sam

#include <iostream>

//Type Conversion
// conversion from one data type to another data type
// implicit and explicit
// implicit = automatic conversion from one data type to another data type
// explicit = manual conversion from one data type to another data type

int main() {
    int x = 1.00;
    double y = x; //implicit conversion from int to double

    int a = 10;
    double b = 20.5;
    int c = a + b; //explicit conversion from double to int

    char letter = 100; //conversion from int to char, using the ascii code of 100


    int correct = 9;
    int questions = 10;
    double score = correct / questions * 100; //this will give 0 as 9/10 = 0.9 and we are using integer division
    double score1 = (double)correct / questions * 100.0; //this will give 90.0 as 9/10 = 0.9 and we are using double division
   
   
    // std::cout << score << std::endl;
    // std::cout << score1 << std::endl;
    // std::cout << letter << std::endl;
    // std::cout << x << std::endl;
    // std::cout << y << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    return 0;

}