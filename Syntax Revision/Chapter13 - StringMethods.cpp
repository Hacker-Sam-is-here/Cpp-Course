//Chapter 13 - String Methods
//-By Sam


#include <iostream>
#include <string>


int main(){

    // .length() - returns the length of the string
    // .empty() - returns true if the string is empty
    // .clear() - clears the string
    // .append() - appends a string to the end of the string. args = the string to append

    // .at() - returns the character at the specified index. args = the index

    // .insert() - inserts a string at the specified index. args = the index, the string to insert

    // .find() - returns the index of the first occurrence of the specified substring. args = the substring

    // .erase() - erases the specified substring. args = the start index, the end index

    std::string name;

    std::cout << "Enter your name: " ;
    std::getline(std::cin >> std::ws, name); // get the full name std::ws = whitespace it removes white spaces

    if(name.length() > 12){ //check if the string is too long
        std::cout << "Your name is too long" << std::endl;
    }
    else if(!name.empty()){ //check if the string is empty
        std::cout << "Your name is " << name << std::endl;
    }

    name.clear(); //clears the string
    std::cout << "Your name is " << name << std::endl;

    name.append("@samishere.com"); //appends a string to the end of the string
    std::cout << "Your email is " << name << std::endl;

    std::cout << "Your first letter is " << name.at(0); //returns the character at the 0th index

    name.insert(0, "Hello "); //inserts a string at the specified index

    std::cout << name.find("am"); //returns the index of the first occurrence of the "am" substring

    name.erase(0, 5); //erases the specified substring from start to end index

}