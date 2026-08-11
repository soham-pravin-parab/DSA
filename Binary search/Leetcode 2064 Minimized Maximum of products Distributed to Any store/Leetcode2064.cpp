class Solution {
public:
    bool valid(int n, vector<int>& quantities, int mid) {
        long long stores = 0;
        for (int qty : quantities) {
            stores += (qty + mid - 1) / mid;

            if (stores > n) {
                return false;
            }
        }
        return stores <= n;
    }

    int minimizedMaximum(int n, vector<int>& quantities) {
        int left = 1;
        int right = *max_element(quantities.begin(), quantities.end());
        int result = right;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (valid(n, quantities, mid)) {
                result = mid;
                right = mid - 1;

            } else {
                left = mid + 1;
            }
        }
        return result;
    }
};