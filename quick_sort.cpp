#include <iostream>
#include <vector>
using namespace std;

int partition(vector <int>&, int, int);

void quickSort(vector<int>& arr, int low, int high) {
   if(low<high){
    int pivote=partition(arr,low,high);
    quickSort(arr,low,pivote-1 );
    quickSort(arr,pivote+1,high);
   }
}
int partition(vector<int>& arr, int low, int high) {
   int pivote=high,i=low-1;
   for(int j=low;j<=high;j++){
    if(arr[j]<=arr[pivote]){
        i++;
        swap(arr[i],arr[j]);
    }
   }                      
   pivote=i;
   return pivote;
}
int main(){
    vector<int> arr;
    int x;
    cout<<"Enter the element: ";
    while(cin>>x && x!=-1){
        arr.emplace_back(x);
    }
    int low=0,n=arr.size();
    int high=n-1;
    quickSort(arr,low,high);
    for(auto itr: arr){
        cout<<itr<<" ";
    }
}