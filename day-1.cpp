/*
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?

                                      -google
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPair(vector<int> array,int sum){
    vector<int> prev;
    for(auto itr=array.begin();itr !=array.end();itr++){
        int temp=sum-*itr;
        auto it= find(prev.begin(), prev.end(), *itr);
        if(it != prev.end()){
            return true;
        }
        prev.push_back(temp);
    }
    return false;
}
int main(){
    int size,temp,sum;
    cout<<"enter the size of array";
    cin>>size;
    cout<<"enter the sum";
    cin>>sum;
    vector<int> array;
    cout<<"enter the datas";
    for(int i=0;i<size;i++){
        cin>>temp;
        array.push_back(temp);
    }
    cout<<isPair(array,sum);
}