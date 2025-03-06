/*
Selection Sort is one of the simplest sorting algorithms. It works by creating a sorted array
by finding and adding the correct element in each iteration
or 
a sorting algorithm that compares elements in an array to arrange them in order?





*/
#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;  // Find the index of the smallest element
            }
        }
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Sorting: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "After Sorting: ";
    printArray(arr, n);

    return 0;
}
