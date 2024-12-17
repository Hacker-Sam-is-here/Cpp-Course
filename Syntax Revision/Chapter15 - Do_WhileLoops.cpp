// Chapter 15 - Do While Loops
//-By Sam

#include <iostream>

int main(){
    // do while loop = a loop that runs at least once and then checks a condition

    int number;

    // This will not work as the condition is checked before the loop is run
    // and the 0<0 is not true

    // while(number<0){
    //     std::cout << "Enter a positive number: " << std::endl;
    //     std::cin >> number;
    // }
    
    //condition ki mkc ye loop chalega ek baar, uske baad conditon check hogi
    do{
        std::cout << "Enter a positive number: " << std::endl;
        std::cin >> number;
    }while(number<0);

    std::cout << "The number is: " << number << std::endl;

    return 0;
}