# include<iostream>

int linear_search(int arr[],int n,int x){
    for (int  i = 0;i< n;i++){
    if (arr[i] == x){
        return i ;
    }
}
    return -1;
}

int main(){
    int n;
    std:: cout<< "enter the size of the array";
    std::cin >> n;
    int arr[n];
    for (int i = 0;i<n;i++){
        std:: cin>> arr[i];

    }
    int x;
    std:: cout<< "enter the value to search";
    std::cin>> x;
    int result =  linear_search(arr, n,x);
    if (x!= -1){
        std:: cout<< "the value is found in index : " << result<< std::endl;

    }
    else{
        std:: cout<< "not found";
    }
    return 0;

}