#include <bits/stdc++.h>
using namespace std;
int sumFind(vector<int> &nums,int k){
    int ans=0,sum=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            if(sum==k)
              ans++;
            else if(sum>k)
              break;
        }
        sum=0;
    }
    return ans;
}
int main(){
    vector<int> nums={-313,-462,381,-374,-249,-123,704,477,982,-684,-372,779,-68,593,-254,-930,
    -142,-369,811,-621,682,167,-125,565,438,-137,-683,257,-454,-256,306,635,-571,52,-59,-411,628,
    895,-509,-9,-722,926,79,392,-720,94,-190,902,96,486,-147,363,-24,604,-265,-680,529,-462,-477,
    -384,991,319,-520,-799,-95,705,528,684};
    int k=339;
    cout<<sumFind(nums,k);
}