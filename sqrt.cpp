#include<bits/stdc++.h>
using namespace std;
int mySqrt(int x) {
    long long int i = 1;
    while ((double)i * (double)i <= x) {
        i++;
    }
    return i - 1;
}
int main(){
    int x;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Squre root of "<<x<<" is "<<mySqrt(x);
    return 0;
}