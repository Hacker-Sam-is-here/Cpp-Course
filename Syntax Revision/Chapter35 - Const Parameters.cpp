//Chapter 35 - Const Parameter
//-BY Sam

#include <iostream>

using namespace std;

void printInfo(const string &name,const int &age);

int main(){

    // const parameter = parameter that cannot be changed and is read-only
    // code is more secure and less prone to bugs
    // it is also more efficient because the compiler can optimize the code better

    string name = "Sam";
    int age = 20;

    printInfo(name, age);

    return 0;
}

void printInfo(const string &name, const int &age){ // const keyword is used to declare a const parameter
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

}