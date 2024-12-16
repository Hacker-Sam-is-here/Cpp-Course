//Chapter 9 - If Statements
//-By Sam

#include <iostream>

int main(){

    /*
    from python to c++
    if = if
    elif = else if
    else = else
    PS: sirf thoda syntax ka farak h baaki same hi h
    */

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
    
    if(age >= 18){ //agar age 18 se badi h
        std::cout << "You are an adult" << std::endl;
    }
    else if(age >= 13){ // agar age 13 se badi h


    //ye sawal hoga ki age 18 se bhi badi h aur 13 se to kya aayega
    // 18 wali condition pehle exececute hojayegi to code run nahi karega uske further
    // agar 13 wali condition upar hoti to dono chije print hoti
        std::cout << "You are a teenager" << std::endl;
    }

    else if(age == 12){ // agar age 12 h
        std::cout << "Chal be Nibbe" << std::endl;
    }

    else{
        std::cout << "Ja Bacche POGO dekh" << std::endl;
    }
}