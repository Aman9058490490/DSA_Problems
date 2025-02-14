#include<bits/stdc++.h>
using namespace std;
vector<int> findUnion(vector<int> &a, vector<int> &b){
    set<int> Unique;
    vector<int> vc;
    int n=a.size(),m=b.size();
    for(int i=0;i<n;i++){
        Unique.emplace(a[i]);
    }
    for(int i=0;i<m;i++){
        Unique.emplace(b[i]);
    }
    
    for(auto itr=Unique.begin();itr!=Unique.end();itr++){
        vc.emplace_back(*itr);
    }
    return vc;
    
}
// Note- in set we Can't use sort function because its allready sorted
// for storing the set in vector we use like Unique is set so we use
// for(auto itr=Unique.begin();itr!=Unique.end();itr++){
//     vc.emplace_back(*itr);
// } where vc is vector which store the all the values of Unique in vc.
int main(){
    vector<int> a;
    vector<int> b;
    int x;
    cout<<"Enter Value of array a: ";
    while(cin>>x && x!=-1){
        a.push_back(x);
    }
    cout<<"Enter Value of array b: ";
    while(cin>>x && x!=-1){
        b.push_back(x);
    }
    vector<int> nums=findUnion(a,b);
    for(auto itr: nums){
        cout<<itr<<" ";
    }

}