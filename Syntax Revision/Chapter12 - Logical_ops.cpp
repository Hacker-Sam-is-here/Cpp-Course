// CHapter 12 - Logical Operators
//-By Sam

#include <iostream>

int main() {
    int temp;
    bool sunny = true;
    std::cout << "Enter the temperature: " << std::endl;
    std::cin >> temp;
    
    if (temp >= 0 && temp <= 30) {
        std::cout << "The temperature is normal" << std::endl;
    }

    else if(temp < 0 || temp > 30) {
        std::cout << "The temperature is abnormal" << std::endl;
    }

    if (!sunny) {
        std::cout << "The weather is not sunny" << std::endl;
    }


    return 0;
}