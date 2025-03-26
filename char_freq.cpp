#include<bits/stdc++.h>
using namespace std;

int freq(vector<char> &nums,int y){
    // vector<int> vec(*max_element(nums.begin(),nums.end())+1);
    char hash[(*max_element(nums.begin(),nums.end()))+1]={0};// another technique which initialise the hash index by 0.
    // cout<<sizeof(hash);
    // fill(vec.begin(),vec.end(),0);
    for(int i=0;i<nums.size();i++){
        // vec[nums[i]]=vec[nums[i]]+1;
        hash[nums[i]-'a']+=1;
    }
    int m=y-'a';
    
    return hash[m];
}
int main(){
    vector <char> nums;
    char x,y;
    cin>>y;
    while(cin>>x && x!='0'){
        nums.push_back(x);
    }
    int k=freq(nums,y);
    cout<<"frequency of "<<y<<" is "<<k;
    return 0;

}