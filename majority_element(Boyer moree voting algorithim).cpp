#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums) {
    int n=nums.size(),k=nums[0],count=1;
    if(n==1){
        return nums[0];
    }
    if(n==0){
        return 0;
    }
    for(int i=1;i<n;i++){
       if(nums[i]==k){
        count=count+1;
       }else{
        count--;
        if(count==0){
            k=nums[i];
            count=1;
        }
    }
 }
    return k;
}
int main(){
    vector<int> nums;
    int x;
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    int m=majorityElement(nums);
    cout<<m;
    return 0;
}