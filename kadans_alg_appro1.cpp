#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxi=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=nums[k];
                maxi=max(sum,maxi);
            }
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