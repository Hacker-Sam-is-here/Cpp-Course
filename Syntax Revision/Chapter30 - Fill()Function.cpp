//Chapte 30 - fill() function
//-By Sam

#include <iostream>

int main(){
    //fill() = fills the array with a specified value
    //syntax: fill(array_name, end, value)

    const int SIZE =100;
    std::string foods[SIZE];
    std::fill(foods, foods + SIZE/3, "Burger");
    std::fill(foods + (SIZE/3), foods + (SIZE/3)*2, "Momos");
    std::fill(foods + (SIZE/3)*2, foods + SIZE, "Maggie");

    for (std::string food : foods){
        std::cout << food << std::endl;
    }

    return 0;
}