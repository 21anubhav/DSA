#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

void coinchanging(int arr[],int n,int amt){
    int res=0;
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++){
        if(arr[i]<=amt){
            int a=floor(amt/arr[i]);{
                amt=amt-a*arr[i];
                res+=a;
                }
                }
                if (amt==0){
                    break;
                }
                }
                cout<<"Coins req:"<<res;
            }
        


int main(){
    int arr[] = {1, 2, 5, 10};
    int amt=46;
    int n = sizeof(arr)/sizeof(arr[0]);
    coinchanging(arr,n,amt);
    return 0;
}