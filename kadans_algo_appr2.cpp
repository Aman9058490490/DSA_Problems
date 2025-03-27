#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums){
      int maxi=INT_MIN,sum=0,ansstart=-1,ansEnd=-1,start;
      for(int i=0;i<nums.size();i++){
          if(sum==0){
              start=i;
            }
        sum=sum+nums[i];
        if(sum>maxi){
            maxi=sum;
            ansstart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
      }
      for(int j=ansstart;j<=ansEnd;j++){
        cout<<nums[j]<<" ";
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