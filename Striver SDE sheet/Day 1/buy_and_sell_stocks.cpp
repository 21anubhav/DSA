#include <bits/stdc++.h>
using namespace std;

int buyandsell(int arr[],int n){
    int maxprofit=0;
    int minprice=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minprice)
        minprice=arr[i];
        else
        maxprofit=max(maxprofit,arr[i]-minprice);
    }
    return maxprofit;
}

int main(){
    int arr[]={2,3,5,1,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<buyandsell(arr,n)<<endl;
    return 0;
}