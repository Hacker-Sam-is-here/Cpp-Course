#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string text_t; //custom type
typedef int number_t;

using decimal_t = double;

int main(){
    /*
    typedef:    reserved keyword used to create a new name 
                for an existing type, variable, function, etc.
                new identifier for an existing type
                helps with readability

    Replaced with 'using' keyword now
    */

    //    std::vector<std::pair<std::string, int>> pairlist;
    //    pairlist_t pairlist;

    text_t text = "Hello world"; //same as std::string text
    number_t age = 25;
    decimal_t pi = 3.14;

    //std::cout << text << std::endl;



   return 0;
}