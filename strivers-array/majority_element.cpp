#include<iostream>
using namespace std;

int majority_element(int arr[], int n){
    
    for(int i=0;i<n;i++){
        int count =0;
        for(int j =0 ;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
           
        }
        if(count > n/2){
            cout<<arr[i];
            return 0;
        }
    }
    cout<<"no element found ";
    return 0;
}

int main(){
    int arr[]={2,1,4,1,3,4,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    majority_element(arr,n);
    return 0;
}