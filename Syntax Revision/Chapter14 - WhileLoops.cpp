//Chapter 14 - While Loops
//-By Sam

#include <iostream>

int main(){

    // while loop = a loop that runs as long as a condition is true

    std::string name;

    while(name.empty()){ // runs as long as name is empty
        std::cout << "enter your name: " << std::endl;
        std::getline(std::cin >> std::ws, name);
    }
    std::cout << "Hello " << name << std::endl;

    return 0;
}