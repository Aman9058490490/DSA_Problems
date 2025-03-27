#include<bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums){
      vector<int> vc_pos;
      vector<int> vc_neg;
      vector<int> final;
      for(int i=0;i<nums.size();i++){
           if(nums[i]>0){
            vc_pos.push_back(nums[i]);
           }else if(nums[i]<0){
            vc_neg.push_back(nums[i]);
           }
      }
      for(int i=0,j=0;i<vc_pos.size()&&j<vc_neg.size();i++,j++){
        final.push_back(vc_pos[i]);
        final.push_back(vc_neg[j]);
      }
      return final;
}
int main(){
    vector <int> nums;
    int x;
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    vector<int> final=rearrangeArray(nums);
    cout<<"Modified array is ";
    for(auto itr: final){
        cout<<itr<<" ";
    }
}