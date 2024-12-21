//Chapter 28 - Search Array For Element
//-By Sam

#include <iostream>

int searchArray(int array[], int size, int element);
int searchStringArray(std::string array[], int size, std::string element);

int main() {

    //example 1
    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;
    
    std::cout << "Enter a number: ";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);
    
    if(index != -1) {
        std::cout << "Number found at index: " << index << std::endl;
    }
    else {
        std::cout << "Number not found in array" << std::endl;
    }

    //example 2
    std::string food[] = {"pizza", "sushi", "tacos", "ice cream"};
    int sizefood = sizeof(food)/sizeof(food[0]);
    int indexItem;
    std::string myitem;
    
    std::cin.ignore(); // Clear input buffer
    std::cout << "Enter a food item: ";
    std::getline(std::cin, myitem);

    indexItem = searchStringArray(food, sizefood, myitem);
    
    if(indexItem != -1) {
        std::cout << "item found at index: " << indexItem << std::endl;
    }
    else {
        std::cout << "item not found in array" << std::endl;
    }

    return 0;
}

int searchArray(int array[], int size, int element) {
    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    return -1;
}

int searchStringArray(std::string array[], int size, std::string element) {
    for(int i = 0; i < size; i++) {
        if(array[i] == element) {
            return i;
        }
    }
    return -1;
}