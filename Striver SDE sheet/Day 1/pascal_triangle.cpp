#include <bits/stdc++.h>
using namespace std;

void pascaltriangle(int n){
    long long ans=1;
    cout<<ans<<" ";

    for (int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";

    }
}
int main(){
    int n=5;
    pascaltriangle(n);
    return 0;
}

