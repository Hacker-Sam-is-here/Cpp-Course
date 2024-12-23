//Chapter 34 - Pass by Value vs Pass by Reference
//- By Sam

#include <iostream>
using namespace std;

void swap(string &x, string &y);

int main(){

    string x = "beer";
    string y = "wine";
    
    swap(x,y); //this will not swap the values of x and y, because strings are passed by value
    //we need to change the function to pass by reference to swap the values of x and y
    // x to &x and y to &y in the function will make it work

    cout << "X:" << x << endl;
    cout << "Y:" << y << endl;

    return 0;
}

void swap(string &x, string &y){
    string temp = x;
    x = y;
    y = temp;
}