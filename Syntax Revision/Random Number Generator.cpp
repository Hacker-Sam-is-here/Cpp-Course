// Random Number Generator
//-By Sam

#include <iostream>
#include <ctime>

int main(){

    srand(time(NULL)); // this will seed the random number generator
    int num = (rand() % 6)+1; // this will generate a random number between 1 and 6
    std::cout << num << std::endl;// this will print the random number


    return 0;
}