//Calculator Program
//-By Sam

#include <iostream>

int main(){
    char op;
    int num1;
    int num2;
    int result;

    std::cout << "**********CALCULATOR**********\n";

    std::cout << "Enter the operator(+, -, *, /): " ;
    std::cin >> op;

    std::cout << "Enter the first number: " ;
    std::cin >> num1;

    std::cout << "Enter the second number: " ;
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            return 0;
    }

    //practice:: recreate this using if-else

    std::cout << "******************************\n";
    return 0;
}