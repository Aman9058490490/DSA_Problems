#include<bits/stdc++.h>
using namespace std;
int i=0;
void BubbleSort(vector<int> &arr){
    int n = arr.size();
    if(i==n){
        return ;
    }
    int k=0;
    for(int j=1;j<n-i;j++){
        if(arr[k]>arr[j]){
         swap(arr[k],arr[j]);
          k++;
        }
        else if(arr[k]<=arr[j]){
          k++;
        }
    }
    i++;
    BubbleSort(arr);
}
int main(){
    vector<int> arr;
    int x;
    while(cin>>x && x!=-1){
        arr.emplace_back(x);
    }
    BubbleSort(arr);
    for(auto itr: arr){
        cout<<itr<<" ";
    }

    return 0;
}