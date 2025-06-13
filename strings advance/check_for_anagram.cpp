#include <iostream>
using namespace std;

const int CHAR=256;
bool areanagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
    return false;
    int count[CHAR]={0};
    
    for (int i=0;i<s1.length();i++)
    {
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0 ;i<CHAR;i++){
        if(count[i]!=0)
        return false;
    }
    return true;

}

int main(){
    string str1="anubhav";
    string str2="bavuhna";

    if(areanagram(str1,str2))
    cout<<"these are anagram";
    else
    cout<<"not anagram";
    return 0;

}
