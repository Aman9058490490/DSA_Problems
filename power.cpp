#include<bits/stdc++.h>
using namespace std;
double myPow(double x, int n) {
    static double power=1;
    if(n<0){
        if(n!=0){
            power=power/x;
            n=n+1;
            myPow(x,n);
        }
        return power;
    }
    if(n>0){
        if(n!=0){
            power=power*x;
            n=n-1;
            myPow(x,n);
        }
        return power;
    }
    if(n==0){
        return power;
    }
    return power;
}
int main(){
    double x;
    int n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter n: ";
    cin>>n;
    double k=myPow(x,n);
    cout<<"power is: "<<k;
    return 0;
}