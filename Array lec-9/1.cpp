#include <iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
        }
        cout<<"FINISH"<<endl;
}

int main (){
    int number[15];
    cout << "value at 1 is: " << number[2] << endl; 

    int one[3] = {1, 3, 4};
    cout << "value at 1 is: " << one[1] << endl; 
    cout << "value at 2 is: " << one[2] << endl;  

    int two[15] = {5, 10};
    int n = 15;
    cout << "printing the array" << endl;
    // for(int i = 0; i < n; i++){
    //     cout << two[i] << " ";  
    // }
    // cout << endl;
    printarray(two,n);

    int third[10] = {0};
    int m = 10;
    cout << "printing the array" << endl;
    // for(int i = 0; i < m; i++){  
    //     cout << third[i] << " ";  
    // }
    // cout << endl;
    printarray(third,n);

    int fourth [5]={0};
    n=5;
    printarray(fourth,5);

    int fifth[10]={1};
    n=10;
    printarray(fifth,10);
    int fifthsize = sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is "<< fifthsize<<endl;

    cout << "Everything is fine." << endl;
    return 0;
}
