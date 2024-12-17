// Chapter 17 - Break and Continue
//-By Sam

#include <iostream>

int main(){
    //break = used to exit a loop
    //continue = used to skip an iteration in a loop

    for(int i=1; i<=10; i++){
        if(i==9) continue; // break the loop at 9 but it will iterate upto the condition
        if(i==13) break; //break the loop and no more iterations
        std::cout << i << std::endl;
        // if(i==5) continue;
    }

}