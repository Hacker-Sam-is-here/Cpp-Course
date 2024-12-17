// CHapter 19 - User Defined Functions
//-By Sam   

#include <iostream>

void happybdayfunction(std::string name){
    std::cout << "Happy Birthday" << name << std::endl;
}

int main(){
    //function = a block of code that performs a specific task
    //functions are called when we want to perform a task

    happybdayfunction("Sam");

    return 0;
}