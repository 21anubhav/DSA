#include <iostream>
using namespace std;

void elements_by_sign (int arr[],int n,int ar[],int m){
    int pos_ind=0;
    int neg_ind=1;
for(int i=0;i<n;i++){
    if(arr[i]>0){
        ar[pos_ind]=arr[i];
        pos_ind=pos_ind+2;
    }
    else {
        ar[neg_ind]=arr[i];
        neg_ind=neg_ind+2;

    }
        }
    }




int main(){
    int arr[] = {1,2,-4,-5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int m;
    m=n;
    int ar[m];
    elements_by_sign(arr,n,ar,m);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}