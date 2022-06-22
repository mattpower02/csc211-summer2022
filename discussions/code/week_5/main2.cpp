#include <iostream>

int main(int argc, char * argv[]){

    int a, b;
    std::cin >> a >> b;

    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << "\nBEFORE SWAPPING \n" << aPtr << "\t" << *aPtr << "\t" << bPtr <<  "\t" << *bPtr << std::endl;

    int temp;

    temp = *aPtr;
    *aPtr = *bPtr;
    *bPtr = temp;

    std::cout << "\nAFTER SWAPPING \n" << aPtr << "\t" << *aPtr << "\t" << bPtr <<  "\t" << *bPtr << std::endl;

    return 0;
}
