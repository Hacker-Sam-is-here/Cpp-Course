// Chapter 21 - Overloaded Functions
//-By Sam

#include <iostream>

//u can have multiple function with same name as long as their paramaeters are different
// the set of parameters is called function signature
// function overloading = multiple functions with same name but different parameters
//each funtion signature is unique and must be different from others



void Pizza();
void Pizza(std::string topping1);
void Pizza(std::string topping1, std::string topping2);

int main(){

    Pizza();
    Pizza("pepperoni");
    Pizza("pepperoni", "mushrooms");

    return 0;
}

void Pizza(){
    std::cout << "Here's a Pizza" << std::endl;
}

void Pizza(std::string topping1){
    std::cout << "Here's a Pizza with " << topping1 << std::endl;
}

void Pizza(std::string topping1, std::string topping2){
    std::cout << "Here's a Pizza with " << topping1 << " and " << topping2 <<std::endl;
}