#include <iostream>
#include <cmath>

/*
    print X + Y = Z where
       - X is all even numbers up to and including 10
       - Y is all powers of 3 starting at one and up to and including 81
       - Z is the sum of each X, Y pair
*/
int main(int argc, char* argv[]){

    for(int x = 0; x <= 10; x+=2){
        for(int y = 1; y <= 81; y*=3){
            int z = x + y;
            std::cout << x << " + " << y <<  " = " << z << std::endl;
        }
    }


    return 0;

}




