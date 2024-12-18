// Chapter 25 - Iterate Over Array
//-By Sam

#include <iostream>

int main(){

    std::string students[] = {"Butcher", "Homelander", "Soldier-Boy", "A-Train", "Hughie", "Starlight"};
    for(int i=0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << std::endl;
    }

    char grade[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    for(int i=0; i < sizeof(grade)/sizeof(char); i++){
        std::cout << grade[i] << std::endl;
    }
    

    return 0;
}