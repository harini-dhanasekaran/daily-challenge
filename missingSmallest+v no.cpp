#include <iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int missingNum(int arr[],int n){
    for(int i=0;i<n;i++){
        while(arr[i]>=1 && arr[i]<=n && arr[i]!=arr[arr[i]-1])
          swap(arr[i],arr[arr[i]-1]);
        
    }
    for(int i=0;i<n;i++){
        if((arr[i]-1)!=i)
           return i+1;
    }
    return n+1;
}
int main() {
    int arr[5]={-4,1,2,6,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missingNum(arr,n);
    return 0;
}