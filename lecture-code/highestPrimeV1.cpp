#include <iostream>


// n > 1
int isHighPrime(int n){

    int isCurrentHighPrime = 1;
    int counter = 0;

    for(int i = n; i >= 1 ; i--){
        for(int j = 2; j < i ; j++){

            if(i % j == 0){
                counter++;
                
            }
        }

        if(counter == 0){
            isCurrentHighPrime = i;
            return isCurrentHighPrime;
        }
        else{
            counter = 0;
        }

    }
}

int main(){


        std::cout << isHighPrime(10);



    return 0;
}