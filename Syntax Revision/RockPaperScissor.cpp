//Rock Paper Scissor Program
//-By Sam


#include <iostream>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
char getWinner(char userChoice, char computerChoice);

int main(){
    char player;
    char computer;

    player  = getUserChoice();
    std::cout << "Your Choice: ";
    showChoice(player);

    computer  = getComputerChoice();
    std::cout << "Computer Choice: ";
    showChoice(computer);

    getWinner(player, computer);


    return 0;
}

char getUserChoice(){
    char player;
    std::cout << "Rock Paper Scissor Game" << std::endl;
    std::cout << "************************" << std::endl;
    do{
        std::cout << "Enter your choice: " << std::endl;
        std::cout << "*******************" << std::endl;
        std::cout << "r for Rock" << std::endl;
        std::cout << "p for Paper" << std::endl;
        std::cout << "s for Scissor" << std::endl;
        std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');
    return player;

};

char getComputerChoice(){
    srand(time(NULL));
    int num = (rand() % 3)+1; // this will generate a random number between 1 and 3

    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;

};

void showChoice(char choice){
    switch(choice){
        case 'r': std::cout << "Rock" << std::endl; break;
        case 'p': std::cout << "Paper" << std::endl; break;
        case 's': std::cout << "Scissor" << std::endl; break;
    }

};

char getWinner(char userChoice, char computerChoice){
    switch(userChoice){
        case 'r': 
            if(computerChoice == 'r'){
                std::cout << "its a tie\n";
            }
            else if (computerChoice == 'p'){
                std::cout << "You Lose";
            }
            else{
                std::cout << "You win";
            }
            break;
        case 'p': 
            if(computerChoice == 'r'){
                std::cout << "You Win\n";
            }
            else if (computerChoice == 'p'){
                std::cout << "Tie\n";
            }
            else{
                std::cout << "You Lose\n";
            }
            break;
        case 's': 
            if(computerChoice == 'r'){
                std::cout << "You Lose!\n";
            }
            else if (computerChoice == 'p'){
                std::cout << "You Win\n";
            }
            else{
                std::cout << "Tie\n";
            }
            break;
    }
    return 0;

};