#include<iostream>
using namespace std;
void printSpiral(int arr[4][4],int row,int col){
    int t=0,b=row-1,l=0,r=col-1,dir=0;
    while(t<=b && l<=r){
        if(dir==0){
            for(int i=l;i<=r;i++)
            cout<<arr[t][i]<<" ";
            t++;
            dir++;
        }
        else if(dir==1){
            for(int i=t;i<=b;i++)
            cout<<arr[i][r]<<" ";
            r--;
            dir++;
        }
        else if(dir==2){
            for(int i=r;i>=l;i--)
            cout<<arr[b][i]<<" ";
            b--;
            dir++;
        }
        else if(dir==3){
            for(int i=b;i>=t;i--)
            cout<<arr[i][l]<<" ";
            l++;
            dir++;
        }
        else
        {
            dir=0;
        }
        
    }
}
int main(){
    int m=4,n=4;
    int arr[4][4]={ { 1, 2, 3, 4 },
                    { 5, 6, 7, 8 },
                    { 9, 10, 11, 12 },
                    { 13, 14, 15, 16 } };;
    printSpiral(arr,m,n);
}