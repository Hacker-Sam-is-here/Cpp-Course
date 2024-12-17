// Banking Program
//-By Sam

#include <iostream>
#include <iomanip>

void showBalance(double balance);
double deposit();
double withdrawal(double balance);

int main(){

    double balance = 0;
    int choice = 0;

    do {
        std::cout << "*******************\n";
        std::cout << "Enter your Choice: \n";
        std::cout << "*******************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdrawal\n";
        std::cout << "4. Exit\n";

        std::cin >> choice;
        std::cin.clear();
        fflush(stdin);

        
        switch(choice){
            case 1: showBalance(balance); break;
            case 2: balance += deposit(); showBalance(balance); break;
            case 3: balance -= withdrawal(balance); showBalance(balance); break;
            case 4: std::cout << "Thanks for using our services" << std::endl;
            default: std::cout << "Invalid Choice" << std::endl;
        }
    }while(choice != 4);

    std::cout << "*******************\n";

    return 0;
}

void showBalance(double balance){
    std::cout << "Your Balance is: $" << std::setprecision(2)<< std::fixed << balance << std::endl;
}

double deposit(){
    double amount = 0;
    std::cout << "Enter the amount to deposit: ";
    std::cin >> amount;
    if (amount>0){
        return amount;}
    else{
        std::cout << "Invalid amount" << std::endl;
        return 0;
    }
}

double withdrawal(double balance){
    double amount = 0;
    std::cout << "Enter the amount to withdraw: ";
    std::cin >> amount;
    if (amount>0 && amount <= balance){
        return amount;
    }
    else{
        std::cout << "Insufficient funds" << std::endl;
        return 0;
    }
}