#include <iostream>
using namespace std;

int maxelement(int arr[],int n)
{
int res=0;
for(int i=1;i<n;i++)
if(arr[i]>arr[res])
{
    res=i;
}
return res;
}
int main(){
    int arr[]={2,400,52,4,22};
    cout<<maxelement(arr,5);
    return 0;
}
