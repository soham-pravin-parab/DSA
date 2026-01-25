
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void getAllSubsets(vector<int>& nums,vector<int>& ans,int i ,vector<vector<int>>& allSubsets){
        if(i==nums.size()){
            allSubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        getAllSubsets(nums,ans,i+1,allSubsets);
        
        ans.pop_back();
        getAllSubsets(nums,ans,i+1,allSubsets);
        
    }
    vector<vector<int>>subset(vector <int>& nums){
        vector<vector<int>>allSubsets;
        vector<int>ans;
        getAllSubsets(nums,ans,0,allSubsets);
        
        return allSubsets;
    }
    
};
int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = sol.subset(nums);
    
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