class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int srow = 0, scoll = 0, erow = n - 1, ecoll = m - 1;
        vector<int> ans;
        while (srow <= erow && scoll <= ecoll) {
            //Top
            for (int j = scoll; j <= ecoll; j++) {
                ans.push_back(mat[srow][j]);
            }
            //Right

            for (int i = srow + 1; i <= erow; i++) {
                
                
                
                ans.push_back(mat[i][ecoll]);
            }
            //Bottom
            if (scoll <= ecoll) {
                for (int j = ecoll - 1; j >= scoll; j--) {
                     if(erow==srow){
                         break;
                     }
                         ans.push_back(mat[erow][j]);
                }
            }
            //left
            if (srow <= erow) {

                for (int i = erow - 1; i >= srow + 1; i--) {
                    if (scoll == ecoll) {
                        break;
                    }
                    ans.push_back(mat[i][scoll]);
                }
            }

            srow++;
            scoll++;
            erow--;
            ecoll--;
        }
        return ans;
    }
};