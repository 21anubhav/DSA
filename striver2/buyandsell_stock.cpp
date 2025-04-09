#include <iostream>
#include <algorithm>
using namespace std;

void buyandsell (int arr[],int n){
int min_price=arr[0];
int max_profit=0;
for (int i=1;i<n;i++){
    int profit=arr[i]-min_price;
    max_profit=max(max_profit,profit);
    min_price=min(min_price,arr[i]);
}
cout<<"max profit: "<<max_profit<<endl;

}


int main(){
    int arr[]={7,1,5,3,6,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    buyandsell(arr,n);
    return 0;
}

