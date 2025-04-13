#include<bits/stdc++.h>
using namespace std;

int cmpr(pair<int,int>a,pair<int,int>b){
    return (a.second<b.second);
}

void activity_sel(pair<int,int>arr[],int n){
    sort(arr,arr+n,cmpr);
    int res=1;
    int prev=0;

    for(int curr=1;curr<n;curr++){
        if(arr[curr].first>=arr[prev].second){
            res++;
            prev=curr;
    }
  
}
cout << "Maximum number of activities: " << res << endl;
}
int main(){
    pair<int,int>arr[]={{12,25},{10,20},{20,30}};
    int n=sizeof(arr)/sizeof(arr[0]);
    activity_sel(arr,n);
    return 0;

}