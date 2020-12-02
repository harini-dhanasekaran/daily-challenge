#include<iostream>
using namespace std;
int findKRotation(int arr[], int n) {
    int noOfRotation=0;
    if(arr[0]<arr[n-1] || n==1)return 0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            noOfRotation++;
            return noOfRotation;
        }
        noOfRotation++;
    }
}
int main(){
    int arr[5]={4,5,1,2,3};
    cout<<findKRotation(arr,5);
    return 0;
}