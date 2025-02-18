#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>> val;
        vector<vector<int>> value;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                for(int k=j+1;k<nums.size();k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                         val.insert({nums[i],nums[j],nums[k]});
                    }
                }           
            }
        }  
        for(auto itr: val){
            value.push_back({itr});
        }
        return value;     
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    vector<vector<int>> val=threeSum(nums);
    cout << "Triplets summing to zero:\n";
    for (auto &itr : val) {
        cout << "[";
        for (int j = 0; j < itr.size(); j++) {
            cout << itr[j];
            if (j < itr.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}