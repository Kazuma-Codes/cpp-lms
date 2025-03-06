/*
You are provided with two arrays. Write a program to find numbers which are present in first array,
but not present in the second array.
*/
#include <iostream>
using namespace std;

void findUnique(int arr1[], int n1, int arr2[], int n2) {
    for (int i = 0; i < n1; i++) {
        int j;
        for (j = 0; j < n2; j++)
            if (arr1[i] == arr2[j]) break;
        if (j == n2) cout << arr1[i] << " ";
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5}, arr2[] = {3, 4, 5, 6, 7};
    findUnique(arr1, 5, arr2, 5);
    return 0;
}



