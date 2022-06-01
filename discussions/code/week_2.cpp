// imports 
#include <cmath>
#include <iostream>
#include <algorithm>

// function definitions
// This is sort of like a promise to your compiler that these functions will exist at some point after the main 
int findGreater(int numOne, int numTwo);
int raiseBySix(int greater);
void printValues(int numOne, int numTwo, int greater, int raisedGreater);

int main(int argc, char* argv[]){

   
   // this block takes in our two numbers through standard in 
    int numOne;
    int numTwo;

    std::cout << "enter the first number: ";
    std::cin >> numOne;

    std::cout << "enter the second number: ";
    std::cin >> numTwo;

     /*
    // Alternitaive to the code above
    // Arguments are stored in an argument vector and can be taken directly from that
    // be mindful that arguments will always be stored as characters in the argument vector

    // it's good to always have some form of error handling when working with argv
    if(argc != 3){

        // this just prints to standard error
        fprintf(stderr, "Proper usage: num1 num2 \n");

        // upon failure, exit out of the program
        exit(1);
    }

    // convert our char arguments to ints
    // std:atoi() also works, but it's less safe
    int numOne = std::stoi(argv[1]);
    int numTwo = std::stoi(argv[2]);
    */

    int greaterNumber = findGreater(numOne, numTwo);
    int raisedGreater = raiseBySix(greaterNumber);

    printValues(numOne, numTwo, greaterNumber, raisedGreater);

    return 0;
}

// a function that returns the greater of two numbers
int findGreater(int numOne, int numTwo){

   return std::max(numOne, numTwo);
}

// a function that raises the greater number by six
int raiseBySix(int greaterNumber){

    return std::pow(greaterNumber, 6);;
}

// a function to print all values
// this can also be done in main, but for the sake of practice we'll make printing its own function
void printValues(int numOne, int numTwo, int greaterNumber, int raisedGreater){

    std::cout << "The larger number of [" <<  numOne <<  " , " << numTwo << "] is " << greaterNumber << std::endl;
    std::cout << greaterNumber << " raised by 6 is " << raisedGreater << std::endl;
}
