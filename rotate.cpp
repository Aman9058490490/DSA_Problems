#include<bits/stdc++.h>
using namespace std;
void rotate(std::vector<int>& nums, int k) { 
    int n = nums.size();
    k = k % n;  

    if (k == 0) return; 
    
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}
int main(){
    vector<int> nums;
    int x,k;
    cout<<"Enter the steps: ";
    cin>>k;
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    rotate(nums,k);
    for(auto itr: nums){
        cout<<itr<<' ';
    }
    return 0;
}