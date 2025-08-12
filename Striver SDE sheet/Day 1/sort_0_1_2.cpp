#include <iostream>
#include <algorithm>
using namespace std;

void sort012 (int arr[],int n){

int low=0;
int mid=0;
int high=n-1;
while(mid<=high){
    if(arr[mid]==0){
        swap(arr[low],arr[mid]);
        low++;
        mid++;
}else if(arr[mid]==2){
    swap(arr[mid],arr[high]);
    high--;
   
}
else{
    mid++;
}

}
 
}
int main(){
    int arr[]={1,2,0,0,2,1,0,2,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,n);
    cout<<"Sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;

}