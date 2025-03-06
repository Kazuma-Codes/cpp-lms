#include<iostream>
int binary_search(int arr[],int size,int x){
    int left = 0, right = size -1;
    while (left <=  right){
        int mid = left + (right - left)/2;
        if (arr[mid ] == x){
            return mid;
        }
        else if(arr[mid ] < x){
            left = mid + 1;

        }
        else {
            right = mid -1;
        }
    }
    return -1;
}
int main(){
    int size;
    std::cout<< "enter a size";
    std:: cin>> size;
    int arr[size];
    for  (int i = 0;i< size;i++){
        std::cin>> arr[i];
    }
    int target;
    std::cout<< "enter the element to search";
    std::cin >> target;
    int result = binary_search(arr,size,target);
    if (result != -1){
        std::cout<< "the index is " << result;

    }
    else {
        std::cout<< "the value is not found";
    }
return 0;

}
