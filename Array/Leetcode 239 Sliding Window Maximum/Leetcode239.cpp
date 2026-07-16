class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n= nums.size();
        deque<int> dq;
        vector<int> ans;
        dq.push_back(0);

        for (int i = 1; i < k; i++) {
            while (dq.size() > 0 && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        ans.push_back(nums[dq.front()]);
        for (int i = k; i < n; i++) {
            if (i - dq.front() + 1 > k) {
                dq.pop_front();
            }
            while (dq.size() > 0 && nums[i] >= nums[dq.back()]) {
                dq.pop_back();
            }
            dq.push_back(i);
            ans.push_back(nums[dq.front()]);
        }
        return ans;
    }
};