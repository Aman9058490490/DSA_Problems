#include<bits/stdc++.h>
using namespace std;
void SelectionSort(vector<int> &arr){
 int n = arr.size();
          for(int i=0;i<n;i++){
              int k=0;
              for(int j=1;j<n-i;j++){
                  if(arr[k]>arr[j]){
                    int temp=arr[j];
                    arr[j]=arr[k];
                    arr[k]=temp;
                    k++;
                  }
                  else if(arr[k]<=arr[j]){
                    k++;
                  }
              }
          }

}
int main(){
    vector<int> arr;
    int x;
    while(cin>>x && x!=-1){
        arr.emplace_back(x);
    }
    SelectionSort(arr);
    for(auto itr: arr){
        cout<<itr<<" ";
    }

    return 0;
}