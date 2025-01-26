#include<bits/stdc++.h>
using namespace std;
string longestPalindrome(string s){
    map<int,string> mp;
    string m;
    string k;
    int count=0,n=s.size(),i=0;
    while(i!=n){
        int p=i;
        for(int j=n-1;j>=0;j--){
            if(s[i]==s[j]){
                k=k+s[i];
                m=m+s[j];
                if(k==m){
                    count++;
                    mp.emplace(count,k);
                    i=i+1;
                }else{
                    count=0;
                    i=p;
                }
            }
        }
        i=i+1;
    }
    return (mp.rbegin())->second;
}
int main(){
    string s;
    cout<<"Enter the string s: ";
    cin>>s;
    string len=longestPalindrome(s);
    cout<<len;
}