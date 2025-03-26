#include<bits/stdc++.h>
using namespace std;

int freq(vector<int> &nums,int y){
    // vector<int> vec(*max_element(nums.begin(),nums.end())+1);
    int hash[*max_element(nums.begin(),nums.end())+1]={0};// another technique which initialise the hash index by 0.
    // fill(vec.begin(),vec.end(),0);
    for(int i=0;i<nums.size();i++){
        // vec[nums[i]]=vec[nums[i]]+1;
        hash[nums[i]]+=1;
    }
 
    return hash[y];
}
int main(){
    vector <int> nums;
    int x,y;
    cin>>y;
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    int k=freq(nums,y);
    cout<<"frequency of "<<y<<" is "<<k;
    return 0;

}