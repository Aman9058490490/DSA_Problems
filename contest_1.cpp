#include<bits/stdc++.h>
using namespace std;
bool hasSpecialSubstring(string s, int k){
    int n=s.size(),count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(s[i]==s[j]){
                count=count+1;
                if(count==k && s[count+1]!=s[count]){
                    return true;
                    break;
                }else{
                    return false;
                    break;
                }
            }else{
                count=0;
                break;
            }
        }
    }
}
int main(){
    string s;
    int k;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"Enter K: ";
    cin>>k;
    bool z=hasSpecialSubstring(s,k);
    cout<<z;
    return 0;
}