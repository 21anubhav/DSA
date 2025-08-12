#include <iostream>
using namespace std;

int kadanes(int n,int arr[]){
    int max_sum=arr[0];
    int current_sum=arr[0];
    for (int i=1;i<n;i++){
        current_sum=max(arr[i],current_sum+arr[i]);
        max_sum=max(max_sum,current_sum);
    }
    return max_sum;
}

int main (){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<kadanes(n,arr)<<endl;
    return 0;
}

