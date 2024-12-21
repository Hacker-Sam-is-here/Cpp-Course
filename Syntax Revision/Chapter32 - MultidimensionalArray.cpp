// Chapter 32 - Multidimensional Array
//-By Sam

#include <iostream>

int main(){
    //multidimensional array = array made of two or more arrays
    //array = {array1, array2.... so on}

    //2d array
    std::string cars[][3] = {{"Mustang", "Escape", "F150"},
                            {"Corvette", "Equinox", "Silverado"},
                            {"Camaro", "Traverse", "Impala"}};

    std::cout << cars[0][0] << "\n"; //printing the first element of the first array

    int rows = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);
    for(int i = 0; i< rows; i++){
        for(int j = 0; j<columns; j++){
            std::cout << cars[i][j] << "\n";
            }
    }
    

    return 0;
}