#include <iostream>
using namespace std;

void deleteElement(int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        cout << "Invalid index!" << endl;
        return;
    }
    
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
   // size--; // Reduce the size of the array (not effective since arrays have fixed size)
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    displayArray(arr, size);
    
    int index;
    cout << "Enter the index of element to delete: ";
    cin >> index;
    
    deleteElement(arr, size, index);
    
    cout << "Array after deletion: ";
    displayArray(arr, size-1);
    
    return 0;
}
