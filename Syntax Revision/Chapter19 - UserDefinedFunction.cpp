// CHapter 19 - User Defined Functions
//-By Sam   

#include <iostream>

//u can directly define a function and add your code or
// declare it first and then add your code later in file

void happybdayfunction(std::string name, int age); //declaration

void happybdayfunction(std::string name, int age){ //function definintion with arguments similar to python
    std::cout << "Happy Birthday " << name << std::endl; //printing text + name from argument
    std::cout << "You are now " << age << " years old" << std::endl;
}

int main(){
    //function = a block of code that performs a specific task
    //functions are called when we want to perform a task

    happybdayfunction("Sam", 19); // function calling

    return 0;
}