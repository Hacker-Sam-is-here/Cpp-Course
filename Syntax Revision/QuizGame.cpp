//Quiz Game
//-By Sam

#include <iostream>

int main(){
    std::string questions[] = {"1. What year was C++ invented?",
                               "2. Who invented C++?",
                               "3. What is the predecessor of C++?",
                               "4. Is Earth Flat?"};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Guido Rossum", "B. Bjarne Stroustrup", "C. John Carter", "D. Bear Grylls"},
                               {"A. C", "B. C++", "C. Java", "D. Python"},
                               {"A. Yes", "B. No", "C. Maybe", "D. I don't know"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0;i< size; i++){
        std::cout << "********************************************" << std::endl;
        std::cout << questions[i] << std::endl;
        std::cout << "********************************************" << std::endl;

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            std::cout << options[i][j] << std::endl;
        }

        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answerKey[i]){
            std::cout << "CORRECT\n";
            score++;
        }
        else{
            std::cout << "INCORRECT\n";
            std::cout << "The correct answer is " << answerKey[i] << std::endl;
        }
    }
    std::cout << "********************************************" << std::endl;
    std::cout << "Your final score is " << score << std::endl;
    std::cout << "********************************************" << std::endl;
}