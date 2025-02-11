#include<bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> arr){
    int k=*max_element(arr.begin(),arr.end());
    arr.erase(remove(arr.begin(),arr.end(),k)+1,arr.end());
    cout<<"The 2nd Largest is: ";
    for(auto itr: arr){
        cout<<itr<<" ";
   }
    return 0;
}


int main(){
   vector<int> arr;
   int x;
   while(cin>>x && x!=-1){
    arr.emplace_back(x);
   }
   getSecondLargest(arr);
}