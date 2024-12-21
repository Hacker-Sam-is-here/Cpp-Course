//CHapter 29 -Sort Array
//-By Sam

//Bubble Sort = start from left and matches each value one by one to right one,
//if left value is bigger, then swap the values

#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {10, 8, 9, 6,7,4,5,2,3,1};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);

    for (int element: array){
        std::cout << element << " ";
    }

    return 0;
}

void sort(int array[], int size){

    int temp;
    for(int i =0; i < size-1; i++){
        for( int j = 0; j < size-i-1; j++){
            if(array[j]>array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

}
