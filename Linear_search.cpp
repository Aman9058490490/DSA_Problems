#include<bits/stdc++.h>
using namespace std;
bool searchInSorted(vector<int>& arr, int k){
    // std::find() iterator return karta hai jo element ka address store karta hai agar element mila to,
    //  aur agar element nahi mila to end() iterator return karta hai.mean jo end me jo just last element ke baad jo value store hoti h
    if(find(arr.begin(),arr.end(),k)==arr.end()){
        return false;
    }else{
        return true;
    }
}
int main(){
    vector<int> arr;
    int x,k;
    cout<<"Enter the value: ";
    cin>>k;
    while(cin>>x && x!=-1){
        arr.push_back(x);
    }
    bool m=searchInSorted(arr,k);
    cout<<m;
    return 0;
}