#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums){
    set<int> unique_set(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
       nums.erase(nums.begin()+i,nums.end());
    }
    for(auto itr: unique_set)
    {
        nums.push_back(itr);
    }
    return unique_set.size();
}
int main(){
    vector<int> nums;
    int x;
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    int k=removeDuplicates(nums);
    cout<<k<<","<<endl;
    for(auto itr: nums){
        cout<<itr<<',';
    }
}
