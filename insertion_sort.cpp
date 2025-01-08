#include<bits/stdc++.h>
using namespace std;
void insertionSort(vector<int> &arr){
    int n = arr.size();
          for(int i=1;i<n;i++){
            int k=i;
              for(int j=i-1;j>=0;j--){
                  if(arr[k]<arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                    k--;
                  }
                  else break;
              }
          }

}
int main(){
    vector<int> arr;
    int x;
    while(cin>>x && x!=-1){
        arr.emplace_back(x);
    }
    insertionSort(arr);
    for(auto itr: arr){
        cout<<itr<<" ";
    }

    return 0;
}