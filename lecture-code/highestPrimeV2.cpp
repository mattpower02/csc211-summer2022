#include <iostream>

bool isPrime(int someNum){
    
    for(int i = 2; i < someNum; i++){

        if(someNum % i == 0){
            return false;
        }
    }

    return true;
}

int highestPrime(int someNum){

    int myPrime = 0;

    for(int i = someNum; i > 1; i--){
        
        if(isPrime(i)){
            myPrime = i;
            break;
        }

    }

    return myPrime;

}

int main(){


    std::cout << highestPrime(10);

    return 0;
}