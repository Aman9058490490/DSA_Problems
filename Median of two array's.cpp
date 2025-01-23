#include<bits/stdc++.h>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    int n=nums1.size();
    int m=nums2.size();
    float Median;
    for(int i=0;i<m;i++){
        nums1.emplace_back(nums2[i]);
    }
    sort(nums1.begin(),nums1.end());
    if((n+m)%2==0){
        Median=(nums1[(n+m-1)/2]+nums1[ceil((n+m-1)/2.0)])/2.0;
    }
    else{
         Median=nums1[(n+m-1)/2];
    }
    return Median;
}  

int main(){
    vector<int> nums1,nums2;
    int x;
    cout<<"Element of nums1: ";
    while(cin>>x && x!=-1){
        nums1.emplace_back(x);
    }
    cout<<"Element of nums2: ";
    while(cin>>x && x!=-1){
        nums2.emplace_back(x);
    }
    float Mid=findMedianSortedArrays(nums1,nums2);
    cout<<"Median of sorted array is: "<<Mid;
    return 0;
}