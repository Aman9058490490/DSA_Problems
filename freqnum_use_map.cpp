#include<bits/stdc++.h>
using namespace std;

int freq(vector<int> &nums,int y){
      map<int,int> mp;
      for(int i=0;i<nums.size();i++){
          mp[nums[i]]=mp[nums[i]]+1;
      }
    //   for(auto itr: mp){
    //     cout<<itr.first<<"-->"<<itr.second<<endl;
    //   }
      return mp[y];
}
int main(){
    vector <int> nums;
    int x,y;
    while(cin>>x && x!=-1){
        nums.push_back(x);
    }
    cout<<"frequency of ";
    cin>>y;
    int k=freq(nums,y);
    cout<<"frequency of "<<y<<" is "<<k;
    return 0;

}