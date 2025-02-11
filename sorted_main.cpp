#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
bool check(vector<int>& nums){
    int i=max_element(nums.begin(),nums.end())-nums.begin(),j=(i+1)%nums.size(),count=0;
    int inversion_count=0;
    while(count!=nums.size()-1){
        if(nums.size()==0 or 1){
            return true;
        }else{
            if(nums[i]>nums[j] && i<j){
                inversion_count=inversion_count+1;
                i=(i+1)%nums.size();
                j=(i+1)%nums.size();
                count=count+1;
                continue;
            }
            if(j==0 && i==nums.size()-1 && nums[j]<nums[i]){
                inversion_count=inversion_count+1;
            }
            i=(i+1)%nums.size();
            j=(i+1)%nums.size();
            count=count+1;
        }
        if(inversion_count<=1){
            return true;
        }
    }
    return false;
}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x && x!=-1){
        nums.emplace_back(x);
    }
    bool k=check(nums);
    cout<<k;
    return 0;
}