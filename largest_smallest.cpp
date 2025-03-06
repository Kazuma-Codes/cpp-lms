//1. Find the largest and smallest number from an unsorted integer array.


#include <iostream>
using namespace std;

void findMinMax(int arr[], int size) {
    int smallest = arr[0], largest = arr[0];

    for (int i = 1; i < size; i++) {
        int currentNumber = arr[i];  // Get the current element of the array
    
        // Check if the current number is smaller than the smallest number found so far
        if (currentNumber < smallest) {
            smallest = currentNumber;  // Update the smallest number
        }
    
        // Check if the current number is larger than the largest number found so far
        if (currentNumber > largest) {
            largest = currentNumber;  // Update the largest number
        }
    }

    cout << "Smallest: " << smallest << "\nLargest: " << largest << endl;
}

int main() {
    int numbers[] = {3, 1, 8, 7, 2, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    findMinMax(numbers, size);

    return 0;
}

