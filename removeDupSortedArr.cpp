/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/
#include<bits/stdc++.h>
using namespace std;
int getNoDupSize(vector<int> &nums){
    if(nums.size()==0)return 0;
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    nums.erase(nums.begin()+(i+1),nums.end());
    return nums.size();

}
int main(){
    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int size=getNoDupSize(nums);
    for(int i=0;i<size;i++)
      cout<<nums[i]<<" ";
    return 0;
}