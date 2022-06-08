#include <iostream>

bool isPrime(int someNum){
    
    for(int i = 1; i < someNum/2; i++){
        if(someNum % i == 0){
            return false;
        }
    }

    return true;
}

int highestPrime(int someNum){

    int myPrime = 0;

    for(int i = someNum; i > 2; i--){

        if(isPrime(i)){
            myPrime = i;
            break;
        }

    }

    return myPrime;

}

int main(){

    std::cout << highestPrime(4);

    return 0;
}