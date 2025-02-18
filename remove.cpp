#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    nums.erase(remove(nums.begin(),nums.end(),val),nums.end());
    return nums.size();
}
int main(){
    vector<int> nums;
    int x,val;
    cout<<"Value: ";
    cin>>val;
    cout<<"Enter Value of array a: ";
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    int k=removeElement(nums,val);
    cout<<k<<endl;
    for(auto itr: nums){
        cout<<itr<<" ";
    }
}