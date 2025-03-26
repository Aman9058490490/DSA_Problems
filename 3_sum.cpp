#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());  // O(n log n)
    vector<vector<int>> result;

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;

                left++;
                right--;
            } else if (sum < 0) {
                left++;  
            } else {
                right--; 
            }
        }
    }

    return result;
}
int main(){
    vector<int> nums;
    int x;
    cout<<"Enter Value of array nums: ";
    while(cin>>x && x!='A'){
        nums.push_back(x);
    }
    vector<vector<int>> val=threeSum(nums);
    cout << "Triplets summing to zero:\n";
    for (auto &itr : val) {
        cout << "[";
        for (int j = 0; j < itr.size(); j++) {
            cout << itr[j];
            if (j < itr.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }
    return 0;
}