// Chapter 22 - Variable Scope
//-By Sam

#include <iostream>

int printNum();
int mynum = 3;//decleared outside a function

int main(){
    //variable scope = where a variable can be used in a program
    //variable scope is determined by where the variable is declared
    // Local variable = variable declared inside a function
    // Global variable = variable declared outside a function

    int mynum = 1;//decleared inside a function

    printNum();


    return 0;
}

int printNum(){
    // std::cout << mynum << std::endl; //this will give an error as mynum is a local variable
    int mynum = 2;//decleared inside a function
    std::cout << ::mynum << std::endl;//this will print 3 the global variable
    // :: is called scope resolution operator and it is used to access global variable

}