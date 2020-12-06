//https://practice.geeksforgeeks.org/problems/maximum-occuring-character/1/?undefined#

#include<bits/stdc++.h>
using namespace std;
char getMaxOccuringChar(string str)
{
    int max=INT_MIN;
    char ans,arr[26]={};
    for(int i=0;str[i]!=NULL;i++){
        arr[str[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==0)continue;
        else if(arr[i]>max){
          max=arr[i];
          ans=i+'a';
        }
        else if(arr[i]==max){
            ans=(ans<i+'a')?ans:i+'a';
        }
    }
    return ans;
}
int main(){
    string str="eeaaiii";
    char output;
    cout<<getMaxOccuringChar(str);
    return 0;
}