// Chapter 26 - Foreach Loop
//-By Sam

#include <iostream>

int main(){
    //foreach loop = loop that eases the traversal over an iterable dataset

    //using the standard for loop
    std::string students[] = {"Butcher", "Homelander", "Soldier-Boy", "A-Train", "Hughie", "Starlight"};
    for(int i=0; i < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << std::endl;
    }

    //using foreach loop
    for(std::string student : students){
        std::cout << student << std::endl;
    }

    int grades[] = {65, 93, 72, 81};
    for(int grade : grades){
        std::cout << grade << std::endl;
    }

    return 0;

}