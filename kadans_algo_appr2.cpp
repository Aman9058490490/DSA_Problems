#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums){
      int maxi=INT_MIN,sum=0;
      for(int i=0;i<nums.size();i++){
        sum=sum+nums[i];
        if(sum>maxi){
            maxi=sum;
        }
        if(sum<0){
            sum=0;
        }
      }
      return maxi;
}
int main(){
    vector <int> nums;
    int x;
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    cout<<"The Largest Sum is "<<maxSubArray(nums);
}
//  [-2,1,-3,4,-1,2,1,-5,4]