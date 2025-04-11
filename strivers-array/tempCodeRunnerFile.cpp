#include <iostream>
#include <algorithm>
using namespace std;

void kadane (int arr[],int n){
    int res=arr[0];
    int max_res=arr[0];
    for(int i=1;i<n;i++){
        res=max(arr[i]+res,arr[i]);
        max_res=max(res,max_res);
    }
    cout<<"sum of max subarray is:"<<max_res<<endl;
}

int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    kadane(arr,n);
    return 0;
}