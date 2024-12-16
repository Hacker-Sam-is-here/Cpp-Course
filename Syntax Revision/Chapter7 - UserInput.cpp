//User Input
//-By Sam

#include <iostream>

//cout << = console output, 
//cin >> = console input

int main() {

    //declaration
    std::string name;
    int age;

    //prompt + input
    std::cout << "Enter your name: " ;
    //std::cin >> name;// this will only get the first word
    std::getline(std::cin >> std::ws, name); // get the full name std::ws = whitespace it removes white spaces

    std::cout << "Enter your age: " ;
    std::cin >> age;


    //output
    std::cout << "Hello " << name << std::endl;
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}