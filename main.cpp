//
//  main.cpp
//  p4-3
//
//  Created by Jakob Hammond on 9/14/23.
//

#include <iostream>
using namespace std;

int main(void){
    int userInput;
    int numDigits;
    
    cout << "Please enter an integer: ";
    cin >> userInput;

    //makes integer positive if negative
    if(userInput < 1){
        userInput *= -1;
    }
    
    //checks number of digits
    if(userInput >= 1000000000){
        numDigits = 10;
    }
    else if(userInput >= 100000000){
        numDigits = 9;
    }
    else if(userInput >= 10000000){
        numDigits = 8;
    }
    else if(userInput >= 1000000){
        numDigits = 7;
    }
    else if(userInput >= 100000){
        numDigits = 6;
    }
    else if(userInput >= 10000){
        numDigits = 5;
    }
    else if(userInput >= 1000){
        numDigits = 4;
    }
    else if(userInput >= 100){
        numDigits = 3;
    }
    else if(userInput >= 10){
        numDigits = 2;
    }
    else{
        numDigits = 1;
    }
    
    cout << "The number has " << numDigits << " digits" << endl;
    
    
    
}
