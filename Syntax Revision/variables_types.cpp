//Variables
//-By Sam


#include <iostream>

int main() {
    int x; //declaration
    x = 10; //initialization

    int y = 20; //declaration and initialization

    //basic operations
    int sum = x+y;
    int diff = x-y;
    int product = x*y;
    int quotient = x/y;
    int remainder = x%y;
    int absolute = abs(x);

    //data types
    
    //int = integer
    int a = 10;
    int age = 30;

    //float = decimal
    float b = 10.5;
    float pi = 3.14;

    //double = decimal
    double c = 10.5;
    double score = 9.8;

    //char = character/ store single character
    char d = 's';
    char grade = 'A';

    //bool = boolean
    bool e = true;
    bool passed = true;

    //string = text
    std::string f = "Hello World";
    std::string name = "John Doe";

    //output
    std::cout << "hello "<< name << ", you are "<< age << " years old" << '\n';
    std::cout << "You score " << score << " out of 10" << '\n';
    std::cout << "Your grade is " << grade << '\n';
    std::cout << "You passed " << passed << '\n';


    //const: constant values that cannot be changed
    //Naming Convention: Constants are usually uppercase
    const double PI = 3.14;
    const double RADIUS = 5;
    const double AREA = PI  * RADIUS * RADIUS;

    const int speed_of_light = 299792458;
    const int screen_width = 1920;
    const int screen_height = 1080;
    //these values arent meant to be changed so we use const

    return 0;
}