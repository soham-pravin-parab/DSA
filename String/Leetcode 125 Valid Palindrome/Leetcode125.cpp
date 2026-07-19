class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int lower = 0;
        int higher = n - 1;
        while (lower < higher) {
            if (!isalnum(s[lower])) {
                lower++;
            } else if (!isalnum(s[higher])) {
                higher--;
            } else if (tolower(s[lower]) == tolower(s[higher])) {
                lower++;
                higher--;
            } else {
                return false;
            }
        }
        return true;
    }
};