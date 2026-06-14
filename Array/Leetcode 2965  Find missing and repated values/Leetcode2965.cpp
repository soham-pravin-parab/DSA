class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int e = n*n;
        vector<int>count (e+1,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                count[grid[i][j]]++;
            }
        }
        int r = -1;
        int m = -1;
        for(int i=1;i<=e;i++){
            if(count[i]==2){
                r=i;
            }
          else if(count[i]==0){
                m=i;
            }
        }
        return {r,m};
    }
};