/*
####
*  *
*  *
####
*/
#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<n;i++){
        if(i==0 || i==n-1)
          cout<<"####";
        else
          cout<<"*  *";
        cout<<endl;
    }
    return 0;
}