#include<bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr,int l,int r, int mid){
    vector <int> lVec, rVec;
    for (int i=l; i <=mid; i++){
        // cout << arr.at(i) << endl;
        lVec.push_back(arr[i]);
    }
    for (int i=mid+1; i <=r; i++){
        rVec.push_back(arr[i]);
    }
    int low = l, k = 0, j = 0;
    
    while(k < lVec.size() && j < rVec.size()){
        // cout << rVec[j] << " " << lVec[k] << " " << endl;
        if (rVec[j] < lVec[k]){
            arr[low++] = rVec[j++];
        } else {
            arr[low++] = lVec[k++];
        }
    }

    while(j < rVec.size()) arr[low++] = rVec[j++];
    while(k < lVec.size()) arr[low++] = lVec[k++];
}
void mergeSort(vector<int> &arr, int l , int r){
     if(r>l){
        int mid = (l+r)/2;
     mergeSort(arr,l,mid);
     mergeSort(arr,mid+1,r);
     merge(arr,l,r, mid);
    }
}
int main(){
    vector<int> arr;
    int x;
    while(cin>>x && x!=-1){
        arr.emplace_back(x);
    }
    mergeSort(arr,0,arr.size()-1);
    for(auto itr: arr){
        cout<<itr<<" ";
    }

    return 0;
}