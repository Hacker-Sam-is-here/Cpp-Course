//Chapter 3 - Namespaces
//-By Sam

#include <iostream>

namespace first{
    int a = 10;
}

namespace second{
    int a = 20;
}

int main(){
    /*
    Namespace: provides a mechanism to group related names together and avoid conflicts
               in large projects. every entity needs a unique name in a program, But namespaces
               allow identaly names as long as their namespaces are different

    int x = 10;
    int x = 20;

    this will throw an error as both have same namespaces
    */

    int a = 0;

    std::cout << first::a << std::endl; //this will print 10
    std::cout << second::a << std::endl; //this will print 20
    std::cout << a << std::endl; //this will print 0
    //the two colons are called scope resolution operator in first and second





    using namespace first; //this will make all the names in first namespace available in main namespace
    std::cout << a << std::endl; // we can now access a from first namespace without using first::a

    //similarly
    using namespace std;// we can now access cout from std namespace without using std::cout or std::string
    cout << "Hello World" << endl;
    string sam = "Sam";




    //however the std contains many namespaces like cin, cout, endl, etc. which we dont want to be included as it will cause ambiguity
    using std::cout; //this will make cout available in main namespace
    using std::string;

    return 0;
}