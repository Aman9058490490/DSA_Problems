#include<bits/stdc++.h>
using namespace std;

// Function to count the frequency of all elements from 1 to N in the array.
vector<int> frequencyCount(vector<int>& arr) {
    // code here
     map<int,int> mp;
     for(int i=0;i<arr.size();i++){
      mp[arr[i]]=mp[arr[i]]+1;
     }
      for(int i=0;i<arr.size();i++){
        arr[i]=mp[i+1];
      }
     return arr;
 }
int main(){
    vector <int> arr;
    int x;
    while(cin>>x && x!=-1){
        arr.push_back(x);
    }
    frequencyCount(arr);
    for(auto itr: arr){
        cout<<itr<<" ";
    }
    return 0;

}