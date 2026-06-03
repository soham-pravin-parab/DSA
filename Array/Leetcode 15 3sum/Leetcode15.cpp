class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        int Twosum;        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            if (i > 0 && nums[i] == nums[i + 1])
                continue;
            int sum = -nums[i];
            int right = n - 1, left = i + 1;
            while (right > left) {
              int  Twosum = nums[right] + nums[left];
                if (Twosum == sum) {
                    result.push_back({nums[i], nums[right], nums[left]});
                    while (right > left && nums[right] == nums[right - 1])
                        right--;
                    while (right > left && nums[left] == nums[left + 1])
                        left++;

                    right--;
                    left++;
                    if (Twosum > sum) {
                        right--;
                    }
                    else if (Twosum<sum{
                        left++;
                    }
                }
            }
        }
        return result;
    }
};