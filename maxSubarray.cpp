/*
Given an integer array nums, find the contiguous subarray (containing at least one number)
 which has the largest sum and return its sum.
 Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6
*/
#include<iostream>
#include<vector>
using namespace std;
int maxSubarray(vector<int> &nums){
    if(nums.size()==0)return 0;
    if(nums.size()==1)return nums[0];
    int local_max=nums[0],ans=nums[0];
    for(int i=1;i<nums.size();i++){
        local_max=max(local_max+nums[i],nums[i]);
        ans=max(local_max-nums[i],ans);
    }
    return ans;
}
int main(){
    vector<int> v={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubarray(v);
    return 0;
}