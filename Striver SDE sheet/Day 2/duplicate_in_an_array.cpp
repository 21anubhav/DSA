#include<bits/stdc++.h>
using namespace std;

int duplicatenumber(vector<int> &nums){
    int slow=nums[0];
    int fast=nums[0];

do{
    slow=nums[slow];
    fast=nums[nums[fast]];
    fast=nums[fast];
    }while(slow!=fast);
    fast=nums[0];
    while(slow!=fast){
        slow=nums[0];
        fast=nums[0];

}
return slow;}
int main(){vector<int> arr = {3, 1, 3, 4, 2};
    cout << "Duplicate number is: " << duplicatenumber(arr) << endl;
    return 0;}


