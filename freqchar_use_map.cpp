#include<bits/stdc++.h>
using namespace std;

int freq(vector<char> &nums,char y){
      map<char,int> mp;// in place of map we will also use the unodeared map , where the change in final output is only give the unsorted pair, like 4-->2,1-->3...so on
      for(int i=0;i<nums.size();i++){
          mp[nums[i]-'a']=mp[nums[i]-'a']+1;
      }
      return mp[y-'a'];
}
int main(){
    vector <char> nums;
    char x,y;
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    cout<<"frequency of ";
    cin>>y;
    int k=freq(nums,y);
    cout<<"frequency of "<<y<<" is "<<k;
    return 0;

}