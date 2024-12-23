//Chapter 36 - Pointers
//Author: Sam

#include <iostream>

int main(){
    //pointers = variable that stores a memory address of another variable
    //its easier to work with addresses
    //& = address-of operator
    //* = dereference operator

    std::string name = "Sam";
    int age = 20;
    std::string pizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};


    std::string *ptrName = &name;
    int *ptrAge = &age;
    //std::string *ptrPizzas = &pizzas; //this is not allowed because pizzas is an array and array is already an address
    std::string *ptrPizzas = pizzas;

    std::cout << "The value of name is: " << *ptrName << std::endl; //accessing the value of name through the * operator and pointer
    std::cout << "The address of name is: " << ptrName << std::endl; //accessing the address of name through pointer

    std::cout << "The value of age is: " << *ptrAge << std::endl;
    std::cout << "The address of age is: " << ptrAge << std::endl;
    
    std::cout << "The value of pizzas is: " << *ptrPizzas << std::endl; //returns 1st element of the array
    std::cout << "The address of pizzas is: " << ptrPizzas << std::endl;

    return 0;
}