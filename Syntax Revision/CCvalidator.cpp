// Credit Card Validator
// -By Sam

// Validate Credit Card Number using Luhn's Algorithm
//1. Double every second digit from right to left.
// If doubling of a digit results in a two-digit number, split them.
//2. Add all digits from step 1.
//3. Add all odd numbered digits from right to left from original number.
//4. Sum the digits from step 2 and step 3.
//5. If the total from step 4 is divisible by 10, the number is valid

#include <iostream>

int getDigit(const int number);
int sumOddDigits(const std::string cardNumber);
int sumEvenDigits(const std::string cardNumber);



int main(){

    std::string cardNumber;
    int result = 0;

    std::cout << "Enter your credit card number: "<< std::endl;
    std::cin >> cardNumber;
    result = sumEvenDigits(cardNumber) + sumOddDigits(cardNumber);

    if(result%10 == 0){
       std::cout << "Credit Card Number is valid." << std::endl;
    }
    else{
        std::cout << "Credit Card Number is invalid." << std::endl;
    }

    return 0;
}

int getDigit(const int number)
{
    return number % 10 + (number /10) % 10;
}

int sumOddDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 1; i >= 0; i -= 2){
        sum += cardNumber[i] - '0'; // Correct conversion
    }

    return sum;
}

int sumEvenDigits(const std::string cardNumber)
{
    int sum = 0;

    for(int i = cardNumber.size() - 2; i >= 0; i -= 2){
        sum += getDigit((cardNumber[i] - '0') * 2); // Correct conversion
    }

    return sum;
}
