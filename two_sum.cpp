#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (mp.find(complement) != mp.end()) {
            return {mp[complement], i}; 
        }
        mp[nums[i]] = i;
    }
    return {};  
}


int main(){
    vector<int> nums;
    int x,target;
    cout<<"target: ";
    cin>>target;
    cout<<"Enter the values of nums: ";
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    vector<int> ind=twoSum(nums,target);
    for(auto itr: ind){
        cout<<itr<<" ";
    }
    return 0;
    
}