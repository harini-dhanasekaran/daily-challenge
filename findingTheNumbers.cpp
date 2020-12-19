//https://practice.geeksforgeeks.org/problems/finding-the-numbers0215/1
//can be solved easily by using o(n)space addtional i.e using map
/*
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas 
the other two number occur exactly once and are distinct. 
Find the other two numbers  (in ascending order)
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int>& nums) 
{ 
        //less time consuming 1.22s  
        // int size=nums.size();
        // for(int i=0;i<size;i++){
        //     auto itr=find(nums.begin()+(i+1),nums.end(),nums[i]);
        //     if(itr!=nums.end()){
        //         nums.erase(itr);
        //         nums.erase(nums.begin()+i);
        //         i--;
        //     }
        // }
        // if(nums[0]>nums[1])
        // {
        //     int temp=nums[0];
        //     nums[0]=nums[1];
        //     nums[1]=temp;
        // }
        // return nums;

        //corret but time consuming <2.25s
        // int size=nums.size(),temp;
        // for(int i=0;i<size;i++){
        //     temp=nums[i];
        //     nums[i]=-1;
        //     if(find(nums.begin(),nums.end(),temp)==nums.end())
        //         nums.push_back(temp);
        //     else
        //         nums[i]=temp;            
        // }
        // cout<<nums.size();
        // nums.erase(nums.begin(),nums.begin()+size);
        // if(nums[0]>nums[1])
        // {
        //     int temp=nums[0];
        //     nums[0]=nums[1];
        //     nums[1]=temp;
        // }
        // return nums;
}
int main(){
    vector<int> v={1,2,3,2,1,4},output;
    output=singleNumber(v);
    cout<<endl;
    for(auto &i:output){
        cout<<i<<" ";
    }
    return 0;
}