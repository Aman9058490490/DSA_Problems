#include<bits/stdc++.h>
using namespace std;
int romanToInt(string s) {
        int n=s.length(),value=0;
    string k;
    map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0;i<n;i++){
        k=k+s[i];
    } 
    for(int i=0;i<n;i++){
        if(mp[k[i]]>=mp[k[i+1]]){
             value=value+mp[k[i]];
        }
        else{
            value=value-mp[k[i]];
        }
    }
    return value;
    }
int main(){
    string s;
    cout<<"write the string: ";
    cin>>s;
    int roman=romanToInt(s);
    cout<<"Roman of the "<<s<<" is: "<<roman;
}