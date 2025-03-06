/*
Design the logic to remove the duplicate elements from an Array and after the deletion the array
should contain the unique elements.
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0) {  // If the array has no elements
        return 0;  // No processing needed, return 0
    }
    
    if (n == 1) {  // If the array has only one element
        return 1;  // No duplicates possible, return 1
    }
     // If array has 0 or 1 element, return as is.

    int j = 0; // Index for storing unique elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) { // If adjacent elements are different, store them
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Store the last element as it's always unique

    return j; // Return new size of array
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
 // If array has 0 or 1 element, return as is.

    int j = 0; // Index for storing unique elements
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) { // If adjacent elements are different, store them
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[n - 1]; // Store the last element as it's always unique

    return j; // Return new size of array
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
