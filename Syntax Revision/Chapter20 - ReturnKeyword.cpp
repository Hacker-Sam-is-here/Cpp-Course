// Chapter 20 - Return Keyword
//-By Sam

#include <iostream>

double square(double num); //declared the function with params
double volume(double edge);

std::string fullname(std::string first, std::string last);

int main(){
    //return keyword = used to return a value from a function
    //return keyword is used to exit the function

    double length = 5.0;
    double area = square(length); // called the function passsing the length as arg
    std::cout << "The area is: " << area << "cm^2" <<std::endl;

    double edge = 10.0;
    double vol = volume(edge); // called the function passsing the edge as arg
    std::cout << "The volume is: " << vol << "cm^3" <<std::endl;

    std::string firstname = "Sam";
    std::string lastname = "Bhai";
    std::string fullnaam = fullname(firstname, lastname); // called the function passsing the first and last name as arg
    std::cout << "The full name is: " << fullnaam << std::endl;

    return 0;
}

double square(double num){ // define the function with params
    double result = num * num;
    return result;
}

double volume(double edge){ // define the function with params
    double result = edge * edge * edge;
    return result;
}

std::string fullname(std::string first, std::string last){ // define the function with params
    std::string result = first + " " + last;
    return result;
}