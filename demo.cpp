# include<iostream>
using namespace std;
void selctionsort(int arr[],int n){
    for(int i = 0;i<n-1;i++){
        int minindex = i;
        for(int j =  i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex = j;
            }
        }
        if(minindex != i){
            int temp = arr[i];
            arr[i] = arr[minindex];
            arr[minindex] = temp;
        }
    }
}
void display(int arr[],int n){
    for(int i =0 ;i<n;i++){
        cout<<  arr[i];
    }
}
int main(){
    int  n;
    cout<< "enter the no of elements";
    cin>> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>> arr[i];
    }
    selctionsort(arr,n);
    display(arr,n);
}