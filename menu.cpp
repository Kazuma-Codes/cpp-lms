/*
4. Develop a Menu driven program to demonstrate the following operations of Arrays
——MENU——-
1.CREATE
2.DISPLAY
3.INSERT
4.DELETE
5.SEARCH
6.EXIT
*/



#include <iostream>
using namespace std;

void display(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[100], size, choice, val, pos;

    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];


        cout << "\n1. DISPLAY  2. INSERT  3. DELETE  4. SEARCH  5. EXIT\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                display(arr, size);
                break;
            
            case 2:
                cout << "Value & Position: ";
                cin >> val >> pos;
                if (pos < 0 || pos > size) {
                    cout << "Invalid position!\n";
                    break;
                }
                for (int i = size; i > pos; i--) arr[i] = arr[i - 1];
                arr[pos] = val;
                size++;
                break;

            case 3:
                cout << "Position: ";
                cin >> pos;
                if (pos < 0 || pos >= size) {
                    cout << "Invalid position!\n";
                    break;
                }
                for (int i = pos; i < size - 1; i++) arr[i] = arr[i + 1];
                size--;
                break;

            case 4:
                cout << "Value: ";
                cin >> val;
                for (int i = 0; i < size; i++) {
                    if (arr[i] == val) {
                        cout << "Found at index " << i << endl;
                        break;
                    }
                }
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }



    return 0;
}

