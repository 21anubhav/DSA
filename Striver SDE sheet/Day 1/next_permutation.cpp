#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    int arr[]={1,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    next_permutation(arr,arr+n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}