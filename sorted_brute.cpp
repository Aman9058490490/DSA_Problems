#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

bool check(vector<int>& nums){
    int i =0;
    int count=0;
    while(count!=nums.size()){
        if(is_sorted(nums.begin(),nums.end())){
            return true;
        }else{
            int m=nums[i];
            nums.erase(nums.begin());
            nums.push_back(m);
            count=count+1;
        }
     }
      return false;
}
int main(){
    vector<int> nums;
    int x;
    while(cin>>x && x!=-1){
        nums.emplace_back(x);
    }
    bool k=check(nums);
    cout<<k;
    return 0;
}