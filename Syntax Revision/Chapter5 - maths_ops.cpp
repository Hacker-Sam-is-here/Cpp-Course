//Arithmetic Operators
//-By Sam

#include <iostream>


int main() {
    //Arithmetic Operators
    // operations = +, -, *, /, %

    //addition
    int students = 20;
    students = students + 2;
    students += 2; // same as students = students + 2
    students ++; // increment operator: same as students = students + 1

    //subtraction
    students = students - 2;
    students -= 2; // same as students = students - 2
    students --; // decrement operator: same as students = students - 1

    //multiplication
    students = students*2;
    students *= 2;

    //division
    students = students/2;
    students /= 2;

    //remainder
    students = students%2;
    students %= 2;

    //priority of operations
    // PEMDAS: Parentheses, Exponents, Multiplication, Division, Addition, Subtraction


    return 0;
}