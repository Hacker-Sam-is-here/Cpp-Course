//If Statements
//-By Sam

#include <iostream>

int main(){
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if(age >= 18){
        std::cout << "You are an adult" << std::endl;
    }
    else{
        std::cout << "You are not an adult" << std::endl;
    }
}