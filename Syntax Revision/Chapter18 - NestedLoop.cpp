//CHapter 18 - Nested Loops
//-By Sam

#include <iostream>

int main(){

    // this count upto 10 three times
    // for(int i = 1; i<=3; i++){
    //     for(int j = 1; j<=10; j++){
    //         std::cout << j << std::endl;
    //     }
    //     std::cout << std::endl;
    // }

    //example 2
    int rows;
    int columns;
    int symbol;

    std::cout << "Enter the number of rows: " << std::endl;
    std::cin >> rows;

    std::cout << "Enter the number of columns: " << std::endl;
    std::cin >> columns;

    std::cout << "Enter the symbol: " << std::endl;
    std::cin >> symbol;

    for(int i = 1; i<=rows; i++){
        for(int j = 1; j<=columns; j++){
            std::cout << symbol;
        }
        std::cout << std::endl;
    }

}