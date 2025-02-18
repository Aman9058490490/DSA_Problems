#include<bits/stdc++.h>
using namespace std;
void sortColors(vector<int>& nums){
    int count1=0,count2=0,count3=0;
    for(int i=0;i<nums.size();i++){
        auto itr=find(nums.begin(),nums.end(),nums[i]);
        if(*itr==0){
            count1=count1+1;
        }else if(*itr==1){
            count2=count2+1;
        }else if(*itr==2){
            count3=count3+1;
        }
    }
    for(int i=0;i<count1;i++){
        nums[i]=0;
    }
    for(int i=count1;i<(count2+count1);i++){
        nums[i]=1;
    }
    for(int i=count1+count2;i<(count1+count2+count3);i++){
        nums[i]=2;
    }
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    sortColors(nums);
    for(auto itr: nums){
        cout<<itr<<" ";
    }
}