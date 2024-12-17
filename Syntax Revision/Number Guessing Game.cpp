// Number Guessing Game
//-By Sam

#include <iostream>

int main(){

    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100)+1;

    std::cout << "**********NUMBER GUESSING GAME**********\n";
    do{

        std::cout << "Enter your guess(0-100): " << std::endl;
        std::cin >> guess;
        tries ++;
        if(guess > num) std::cout << "Too high!" << std::endl;
        else if(guess < num) std::cout << "Too low!" << std::endl;
        else std::cout << "You got it in " << tries << " tries!" << std::endl;

    }while(guess != num);

    std::cout << "***************************************\n" ;

    return 0;
}