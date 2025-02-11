#include<bits/stdc++.h>
using namespace std;
string intToRoman(int num){
    string k;
    map<int,char> mp={{1,'I'},{5,'V'},{10,'X'},{50,'L'},{100,'C'},{500,'D'},{1000,'M'}};
    map<int,char> mp1={{1,1},{2,5},{3,10},{4,50},{5,100},{6,500},{7,1000}};
    if(num==1 or num==2 or num==3){
        while(num!=0){
            k=k+mp[1];
            num--;
        }
    }else if(num==0){
        return NULL;
    }
    return k;
    string str=to_string(num);
    if(str[0]!='4' || str[0]!='9'){
        for(int j=mp1.size()-1;j>=0;j--){
            while(mp1[j]<=num){
                k=k+mp[mp1[j]];
                num=num-mp1[j];
            }
        }
    }else if(str[0]==4 or str[0]==9){
        map<int,string> mp2={{4,"IV"},{9,"IX"},{40,"XL"},{90,"XC"},{400,"CD"},{900,"CM"}};
        int z=str.size();
        for(int i=z-1,j=0;i>=1,j<z;i--,j++){
            char c=str[j];
            int value=c-'0';
            int stor=value*(10^i);
            k=k+mp2[stor];
        }

    }
    return k;
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    string len=intToRoman(num);
    cout<<len;
    return 0;
}