#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int n=nums.size(),count=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            count=count+1;
         }   
    }
    nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
    while(count!=0){
        nums.push_back(0);
        count=count-1;
    }

}

int main(){
    vector<int> nums;
    int x;
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    moveZeroes(nums);
    for(auto itr: nums){
        cout<<itr<<' ';
    }
    return 0;
    
}