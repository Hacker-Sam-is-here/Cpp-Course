// Chapter 10: Switch Statements
//-By Sam

#include <iostream>

int main(){
    //switch = alternative to using many "else if" statements
    //         compare one value to matching cases

    int month;
    std::cout << "Enter the month number: " ;
    std::cin >> month;

    //Bekar way, Time consuming, Slow, Unreadable, Unmaintainable
    // if(month==1) std::cout << "January" << std::endl;
    // else if(month==2) std::cout << "February" << std::endl;
    // else if(month==3) std::cout << "March" << std::endl;
    // else if(month==4) std::cout << "April" << std::endl;
    // else if(month==5) std::cout << "May" << std::endl;
    // else if(month==6) std::cout << "June" << std::endl;
    // else if(month==7) std::cout << "July" << std::endl;
    // else if(month==8) std::cout << "August" << std::endl;
    // else if(month==9) std::cout << "September" << std::endl;
    // else if(month==10) std::cout << "October" << std::endl;
    // else if(month==11) std::cout << "November" << std::endl;
    // else if(month==12) std::cout << "December" << std::endl;
    // else std::cout << "Invalid month" << std::endl;

    //Switch 
    //example 1
    switch(month){ //month is the value we are comparing to the cases
        case 1: 
            std::cout << "January" << std::endl; 
            break;
        case 2: 
            std::cout << "February" << std::endl; 
            break;
        case 3: 
            std::cout << "March" << std::endl; 
            break;
        case 4: 
            std::cout << "April" << std::endl; 
            break;
        case 5: 
            std::cout << "May" << std::endl; 
            break;
        case 6: 
            std::cout << "June" << std::endl; 
            break;
        case 7: 
            std::cout << "July" << std::endl; 
            break;
        case 8: 
            std::cout << "August" << std::endl; 
            break;
        case 9: 
            std::cout << "September" << std::endl; 
            break;
        case 10: 
            std::cout << "October" << std::endl; 
            break;
        case 11: 
            std::cout << "November" << std::endl; 
            break;
        case 12: 
            std::cout << "December" << std::endl; 
            break;
        default: //similar to else statement
            std::cout << "Invalid month" << std::endl; 
            break;
    }

    char grade;
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    //example 2
    switch(grade){
        case 'A': 
            std::cout << "Excellent" << std::endl; 
            break;
        case 'B': 
            std::cout << "Good" << std::endl; 
            break;
        case 'C': 
            std::cout << "Average" << std::endl; 
            break;
        case 'D': 
            std::cout << "Thik Thak" << std::endl; 
            break;
        case 'E': 
            std::cout << "Chud Gaye Guru" << std::endl; 
            break;
        default: //similar to else statement
            std::cout << "Padhle Saale Back aagyi" << std::endl; 
            break;
    }

    return 0;   

}