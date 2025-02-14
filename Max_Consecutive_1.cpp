#include<bits/stdc++.h>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums){
    int sum=0,n=nums.size();
    vector<int> vc;
    for(int i=0;i<n;i++){
        if(nums[i]==1){
            sum=sum+nums[i];
        }else{
            vc.push_back(sum);
            sum=0;
        }
    }
    vc.push_back(sum);
    return *max_element(vc.begin(),vc.end());
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    int k=findMaxConsecutiveOnes(nums);
    cout<<"Maximum Consecutive 1's is: "<<k;
    return 0;
}