#include <iostream>
using namespace std;

void leaders_in_array(int arr[],int n){
    int maxfromright=arr[n-1];
    cout<<arr[n-1]<<" ";
    for (int i=n-2;i>=0;i--){
        if(arr[i]>maxfromright){
            maxfromright=arr[i];
            cout<<maxfromright<< " "; 
        }
    
    }
        }
        

int main(){
    int arr[]={10, 22, 12, 3, 0, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
      leaders_in_array(arr,n);
      return 0;
}