//Chapter 24 - Sizeof() Operator
//-By Sam

#include <iostream>

int main(){
    //sizeof() = determine the size in bytes of a variable, data type, class, objects etc

    double gpa = 2.5;
    std::cout << sizeof(gpa) << " bytes\n";

    std::string name = "Sam Bhai badmos";
    std::cout << sizeof(name) << " bytes\n";

    char grade = 'A';
    std::cout << sizeof(grade) << " bytes\n";

    bool student = true;
    std::cout << sizeof(student) << " bytes\n";


    char grades[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::cout << sizeof(grades) << " bytes\n";
    std::cout << sizeof(grades)/sizeof(char) << " characters\n";


    std::string students[] = {"Sam", "Bhai", "Badmos"};
    std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " students\n";

    return 0;
}