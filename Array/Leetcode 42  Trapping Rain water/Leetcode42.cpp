class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n<3){
           return 0;
        }
        int ans = 0;
        int lmax = height[0];
        int rmax = height[n - 1];
        int left = 1;
        int right = n - 2;
        while (left <= right) {
            lmax = max(lmax, height[left]);
            rmax = max(rmax, height[right]);
            if (lmax < rmax) {
                ans += lmax - height[left++];
            } else {
                ans += rmax - height[right--];
            }
        }
        return ans;
    }
};