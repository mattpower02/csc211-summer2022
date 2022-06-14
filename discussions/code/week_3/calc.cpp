#include <iostream>

// function definitions
int ifCalc(char op, float a, float b);
int switchCalc(char op, float a, float b);

/*
    1. write two functions
        - one that handles calculator logic with an if/else block
        - one that hanles the same logic with a switch statment

    2. prints the result in main

*/

int main(int argc, char* argv []){

    char op;
    float a, b;

    std::cout << "enter the first number: ";
    std::cin >> a;

    // operators should only be *, /, +, -
    std::cout << "enter an operator: ";
    std::cin >> op;


    std::cout << "enter the second number: ";
    std::cin >> b;


    float ifResult = ifCalc(op, a, b);
    std::cout << "If/Else: " << a << " " << op << " " << b << " = " << ifResult << std::endl;

    float switchResult = switchCalc(op, a, b);
    std::cout << "switch: " << a << " " << op << " " << b << " = " << switchResult << std::endl;


}

// a function to handle the lofic in an if/else block
int ifCalc(char op, float a, float b){

    if(op == '*')
        return(a * b);

    else if(op == '/')
        return(a / b);

    else if(op == '+')
        return(a + b);

    else if(op == '-')
        return(a - b);

    else
        std::cout << "not a valid expression" << std::endl;
        exit(1);


}

// a function to handle the logic in a switch statement
int switchCalc(char op, float a, float b){

    switch(op){
        case '*':
            return(a * b);

        case '/':
            return(a / b);

        case '+':
            return(a + b);

        case '-':
             return(a - b);

        default:
            std::cout << "not a valid expression" << std::endl;
            exit(1);
    }

}
