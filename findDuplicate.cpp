#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int>& nums) {
    for(int i=0;i<nums.size();i++){
        nums[nums[i]-1]*=-1;
        if(nums[nums[i]-1]>0)
            return nums[i];
    }
    return 0;
}
int main(){
    vector<int> nums={3,1,3,4,2};
    cout<<findDuplicate(nums);
    return 0;
}