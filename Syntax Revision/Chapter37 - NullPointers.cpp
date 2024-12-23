//Chapter 37 - Null Pointers
//- By Sam

#include <iostream>

int main(){
    //Null value = a value that means something has no value,
    //when a pointer is holding a null value,
    //that pointer is not pointing at anything(null pointer)

    //nullptr = keyword represents a null pointer literal

    //nullptrs are helpful when determining if an address
    //was successfully assigned to a pointer

    int *pointer = nullptr;
    int x = 123;
    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Pointer is null" << std::endl;
    }
    else{
        std::cout << "Pointer is not null" << std::endl;
    }

    return 0 ;
}