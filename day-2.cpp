/*
Given an array of integers, return a new array such that each element at index i of the 
new array is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], 
the expected output would be [120, 60, 40, 30, 24].
 If our input was [3, 2, 1], the expected output would be [2, 3, 6]

                          -Uber
*/
                          
                  // not using division
// #include <iostream>
// #include <vector>
// using namespace std;
// void product(vector<int> array,int size){
//     int temp=1;
//     vector<int> prod;
//     prod.push_back(temp);
//     for(int i=0;i<size-1;i++){
//         temp*=array[i];
//         prod.push_back(temp);
//     }
//     temp=1;
//     for(int i=size-1;i>=0;i--){
//         temp*=array[i];
//         prod[i-1]*=temp;
//     }
//     for(int i=0;i<size;i++)
//       cout<<prod[i]<<" ";
// }
// int main(){
//     int size,temp;
//     vector<int> array;
//     cout<<"enter the size of array";
//     cin>>size;
//     cout<<"enter the datas";
//     for(int i=0;i<size;i++){
//         cin>>temp;
//          array.push_back(temp);
//     }
      
//     product(array,size);
//     return 0;
// }

                     //using division

#include <iostream>
using namespace std;
int main(){
    int size,mulT=1;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the data";
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
        mulT*=array[i];
    }
    for(int i=0;i<size;i++){
        int temp=mulT;
        array[i]=temp/array[i];
        cout<<array[i]<<" ";
    }

}