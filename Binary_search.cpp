#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int target){
        static int low=0,high=nums.size()-1; 
        int mid=(high-low)/2;
        if(low<high){
            if(target==nums[mid]){
                return nums[mid];
            }else if(target>nums[mid]){
                low=mid+1;
                search(nums,target);
            }else {
                high=mid-1;
                search(nums,target);
            }
        }
}
int main(){
    vector<int> nums;
    int x,target;
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
}