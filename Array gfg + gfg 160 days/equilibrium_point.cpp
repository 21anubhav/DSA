//ayesi situtaion jisme left and rightt side ka sum same aaye...corner left element can also be equilibrium point


#include <iostream>
using namespace std;

bool epoint(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        res+=arr[i];
    }
    int ls=0;
    for (int i=0;i<n;i++){
        res-=arr[i];
        if(ls==res)
        return true;
        ls+=arr[i];
    }
    return false;
}

int main(){
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<epoint(arr,n)<<endl;
}