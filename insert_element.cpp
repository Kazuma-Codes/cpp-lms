#include <iostream>

using namespace std;

void insertElement(int arr[], int size, int element, int position) {
    if (position < 0 || position > size) {
        cout << "Invalid position!" << endl;
        return;
    }
    
    // Shift elements to the right
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    // Insert new element
    arr[position] = element;
    
    // Increase size (not possible without reference, but included as a comment)
    // size++;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], size, element, position;
    
    cout << "Enter the size of the array: ";
    cin >> size;
    
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to insert: ";
    cin >> element;
    
    cout << "Enter the position (0-based index): ";
    cin >> position;
    
    insertElement(arr, size, element, position);
    
    cout << "Array after insertion: ";
    displayArray(arr, size + 1); // Manually increment size when calling displayArray
    
    return 0;
}
