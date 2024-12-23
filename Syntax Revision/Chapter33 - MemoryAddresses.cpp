//Chapter 33 - Memory Addresses
//-By Sam

#include <iostream>

int main(){

    //memory address = a location in memory where a value can be stored
    //a memory address can be accessed using the '&' operator

    std::string name = "Sam";
    int age = 20;
    bool student = true;

    std::cout << &name << std::endl;
    std::cout << &age << std::endl;
    std::cout << &student << std::endl;
    

    return 0;
}