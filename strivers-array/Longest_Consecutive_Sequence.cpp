#include <iostream>
#include <algorithm>
using namespace std;


void longest_common_subsequence(int arr[],int n){
    int longest=1;
    int common=1;
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
       if(arr[i]==arr[i-1]){
        continue;
       }
           else if(arr[i]==arr[i-1]+1){
                common =common+1;
    }else{
        longest=max(longest,common);
        common =1;
    }

    

}
cout<<longest<<" ";
}
int main(){
    int arr[]={100, 200, 1, 3, 2, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    longest_common_subsequence(arr,n);
    return 0;
}