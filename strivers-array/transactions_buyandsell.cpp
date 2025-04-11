#include<iostream>
using namespace std;

void buyandsellmultiple (int arr[],int n){
    int profit=0;
    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1])
    profit=profit+(arr[i]-arr[i-1]);
    
    }
    cout<<profit;
}





int main (){
    int arr[]= {7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    buyandsellmultiple(arr,n);  
    return 0;
}