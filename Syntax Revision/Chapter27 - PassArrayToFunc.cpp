// Chapter 27 - Pass Array to Function
// -By Sam

#include <iostream>


double getTotal(double prices);


int main(){

    double prices[] = {49.99, 15.05, 75, 9.99};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);
    std::cout << "Total: $" << total << std::endl;

    return 0;
}

double getTotal(double prices[],int size){
    double sum = 0;
    for(int i = 0; i< size; i++){
        sum += prices[i];
    }
    return sum;

}