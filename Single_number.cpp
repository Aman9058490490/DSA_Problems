#include<bits/stdc++.h>
using namespace std;
int singleNumber(vector<int>& nums) {
    for(int i=1;i<nums.size();i++){
        if(find(nums.begin()+i,nums.end(),nums[i-1])==nums.end()){
             return nums[i-1];
        }
    }
    return 0;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    int k=singleNumber(nums);
    cout<<"Unique number is: "<<k;
}