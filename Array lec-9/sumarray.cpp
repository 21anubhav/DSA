#include <iostream>
using namespace std;

int main(){
    int number[5];
    cout<<"Enter the 5 numbers"<<endl;

    for(int i=0;i<5;i++){
        cout<<"Number"<<i+1<<": ";
        cin>>number[i];

    }

    int sum=0;
    for (int i=0;i<5;i++){
        sum=sum+number[i];
    }
    
    cout<<"sum of the numbers:"<<sum<<endl;


    return 0;
}