#include<bits/stdc++.h>
using namespace std;
int i=0,value=0;
string k;
int conver(string k,int n,map<char,int> mp){

    if(i==n){
        return value;
    }
    if(mp[k[i]]>=mp[k[i+1]]){
         value=value+mp[k[i]];
         i++;
         conver(k,n,mp);
    }
    else{
        value=value-mp[k[i]];
    }
}

int romanToInt(string s){
    int n=s.length();
    map<char,int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
    for(int i=0;i<n;i++){
        k=k+s[i];
    } 
    conver(k,n,mp);
}
int main(){
    string s;
    cout<<"write the string: ";
    cin>>s;
    int roman=romanToInt(s);
    cout<<"Roman of the "<<s<<" is: "<<roman;
}