#include <iostream>

void fillArray(int *arr, int n);

int main(int argc, char* argv []){

    int arr_size;

    std::cout << "What is the array size? ";
    std::cin >> arr_size;


    int arr[arr_size] = { 0 };

    fillArray(arr, arr_size);

	for (int i = 0; i <= arr_size; i++) {
		std::cout << arr[i] << ' ';
	}

	std::cout << "\n";


    return 0;
}

void fillArray(int *arr, int n){

    for (int i = 0; i <= n; i++) {
    		arr[i] = i;
    	}
}
