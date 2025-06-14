#include <iostream>
#include <algorithm>
using namespace std;

void zero_to_end(int arr[],int n){
    int i = 0;
    int count=0;

    for(int i=0;i<n;i++) {
        if (arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}
int main(){
    int arr[] = {0, 1, 0, 3, 12,};
    int n= sizeof(arr)/sizeof(arr[0]);
    zero_to_end(arr,n);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
