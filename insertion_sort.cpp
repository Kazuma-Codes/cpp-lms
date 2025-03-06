/*
Insertion Sort is one of the simplest sorting algorithms.
picks one element at a time and arranges it
*/
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // start from 1 as the first value is sorted
    for (int i = 1; i < n; i++) {
        int key = arr[i];// Pick the current element to insert at the correct position
        int j = i - 1; // Start comparing with the previous element

        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; 
            j--;
        }
        // place the key at  its correct positin
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int n;
    
    // Asking user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n]; // Declare array dynamically based on user input

    // Taking input for the array elements
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    printArray(arr, n);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}