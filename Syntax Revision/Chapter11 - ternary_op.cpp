//Chapter 11 - Ternary Operators
//-By Sam

#include <iostream>

int main(){
    // ternary operator ?= replacementto an if/else statement
    // condition ? exp1 : exp2
    // if condition is true, execute exp1, else execute exp2

    int age = 20;
    
    //old if/else way
    if(age>=18){
        std::cout << "You can drive" << std::endl;
    }
    else{
        std::cout << "You can't drive" << std::endl;
    }

    //this can be done in one line using ternary operator
    std::cout << (age >= 18 ? "You can drive" : "You can't drive") << std::endl;


    //example 2: checking even/odd
    int num = 13;
    std::cout << (num%2 == 0 ? "Even" : "Odd") << std::endl;

    //example 3
    bool hungry = true;
    std::cout << (hungry ? "Hungry" : "Not hungry") << std::endl;


    //u can either write the output as:
    //std::cout << (hungry ? "Hungry" : "Not hungry") << std::endl;
    //or
    //hungry ? std::cout << "Hungry" << std::endl : std::cout << "Not hungry" << std::endl;

    return 0;
}