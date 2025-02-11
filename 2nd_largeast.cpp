#include<bits/stdc++.h>
using namespace std;
int getSecondLargest(vector<int> &arr){
   if(arr.size()<2){
      return -1;
   }
   int k=*max_element(arr.begin(),arr.end());
   arr.erase(remove(arr.begin(), arr.end(), k), arr.end());

   if(arr.size()<1){
      return -1;
   }
   return *max_element(arr.begin(),arr.end());
      
}
int main(){
   vector<int> arr;
   int x;
   while(cin>>x && x!=-1){
    arr.emplace_back(x);
   }
   int element=getSecondLargest(arr);
   cout<<"The 2nd Largest is: "<<element;
}