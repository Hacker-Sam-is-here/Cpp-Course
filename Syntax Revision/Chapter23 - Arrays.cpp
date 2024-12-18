// Chapter 23 - Arrays
//-By Sam

#include <iostream>

int main(){
    // Arrays = a data structure that stores multiple values of same type
    // values are accessed by index numbers
    //size of array is fixed and cannot be changed


    //declaring an array of type string an adding values to it
    std::string car[] = {"Corvette", "Mustang", "Camaro", "Lamborghini"}; // 3 elements in the array
    
    car[0] = "Tesla";

    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;
    std::cout << car[2] << std::endl;
    std::cout << car[3] << std::endl;


    //decalring a array
    std::string bikes[2]; //you have to set the size of array when u are just declaring

    //adding values to the array
    bikes[0] = "Honda";
    bikes[1] = "Yamaha";

    std::cout << bikes[0] << std::endl;

    //example 2: prices array
    double prices[] = {5.00, 7.50, 9.99, 15.00};

    std::cout << prices[0] << std::endl;
    std::cout << prices[1] << std::endl;
    std::cout << prices[2] << std::endl;
    std::cout << prices[3];

    return 0;
}