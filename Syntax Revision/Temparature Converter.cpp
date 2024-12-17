// Temparature Converter
//-By Sam

#include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "***********TEMPARATURE CONVERTER**********\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";

    std::cout << "What unit would you like to convert to: " << std::endl;
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temperature in Celcius: " << std::endl;
        std::cin >> temp;
        temp = (temp - 32) * 5/9;
        std::cout << "The temperature in Fahrenheit is: " << temp << std::endl;
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temperature in Fahrenheit: " << std::endl;
        std::cin >> temp;
        temp = (temp * 9/5) + 32;
        std::cout << "The temperature in Celcius is: " << temp << std::endl;
    }
    else{
        std::cout << "Invalid unit" << std::endl;
    }


    std::cout << "******************************************\n";


    return 0;
}