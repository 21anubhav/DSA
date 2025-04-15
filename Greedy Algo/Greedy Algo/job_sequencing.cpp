#include <bits/stdc++.h>
using namespace std; 

int cmpr(pair<int,int>a,pair<int,int>b){
    return a.first>b.first;
}

int job_seq(pair<int,int>arr[],int n){
    sort(arr,arr+n,cmpr);
    int maxi=0;
    for(int i=0;i<n;i++){
        maxi=max(maxi,arr[i].second);
    }
int slot[maxi+1];
for(int i=0;i<=maxi;i++){
    slot[i]=-1;//har slot ko -1 value giving
}
int countjobs=0,jobprofit=0;

for (int i = 0; i < n; i++) {
    for (int j = arr[i].second; j > 0; j--) {
       if (slot[j] == -1) {
          slot[j] = i;
          countjobs++;
          jobprofit += arr[i].first;
          break;
       }
    }
 }

return jobprofit;
}
int main(){
pair<int,int> arr[] = {{50,2}, {60,2}, {20,3}, {30,3}};

int n = sizeof(arr)/sizeof(arr[0]);
int result = job_seq(arr,n);
cout<<result;
return 0;
}

