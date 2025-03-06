#include<iostream>
using namespace std;
int main(){
    int n;
    cout<< "enter the no of elements";
    cin >> n;
    int arr[n];
    int sum =  0;
    cout<<"enter the elements";
    for(int i = 0 ;i<n;i++){
cin>> arr[i];
    }
    for(int i = 0;i<n;i++ ){
        sum += arr[i];

    }
    double average = sum/n;
    cout<<average <<"average"<<endl;
    cout<<"sum is "<< sum<<endl;
}