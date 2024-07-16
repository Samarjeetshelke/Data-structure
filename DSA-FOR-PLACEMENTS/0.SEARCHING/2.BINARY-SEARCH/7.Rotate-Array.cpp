// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
//using namespace std;
int main() {
    // Define a sorted array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Determine the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Define the number of positions to rotate
    int k = 3;

    // Rotate the array to the right by k positions
    std::rotate(arr, arr + k, arr + n);

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
