// Random Event Generator
//-By Sam


#include <iostream>
#include <ctime>

int main(){

    srand(time(0)); // this will seed the random number generator
    int randNum = (rand() % 5)+1; // this will generate a random number between 1 and 6

    switch(randNum){
        case 1: std::cout << "You got a new car!" << std::endl; break;
        case 2: std::cout << "You got a new phone!" << std::endl; break;
        case 3: std::cout << "You got a new computer!" << std::endl; break;
        case 4: std::cout << "You got a new laptop!" << std::endl; break;
        case 5: std::cout << "You got a new TV!" << std::endl; break;
        default: std::cout << "You got dil**!" << std::endl;
    }

    return 0;
    
}