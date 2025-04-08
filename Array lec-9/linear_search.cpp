#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
for (int i=0;i<size;i++){
    if(arr[i]==key){
    return true;}
    
}
return false;
}

int main(){
    
    int arr[10]={2,4,6,12,-4,22,7,9,1,-2};
    cout<<"Enter the key"<<endl;

    int key;
    cin>>key;

    bool found = search (arr,10,key);
    if (found)
    cout<<"Element is present in array"<<endl;
    else
    cout<<"Element is not present in array"<<endl;
    //wheather 1 is present in it or not


    return 0;
}   



