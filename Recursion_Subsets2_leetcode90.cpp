
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsets(vector<int>&nums){
         vector<vector<int>>allSubsets ;
         vector <int> ans;
         getAllSubsets (nums,ans,0,allSubsets);
         return allSubsets;
    }
    void getAllSubsets (vector<int>& nums, vector<int>&ans,int i,vector<vector<int>>& allSubsets){
        if( i==nums.size()){
            allSubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allSubsets);
        ans.pop_back();
        
        int idx=i+1;
        while(idx<nums.size()&&nums[idx]==nums[idx-1]){
            idx++;
        }
        getAllSubsets(nums,ans,idx,allSubsets);
        
    }
};
    int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2};
    vector<vector<int>> result = sol.subsets(nums);
    
    cout << "Found " << result.size() << " subsets" << endl;  // Should print 8
    
    for(int k = 0; k < result.size(); k++) {
        cout << k << ": ";
        for(int x : result[k]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

    