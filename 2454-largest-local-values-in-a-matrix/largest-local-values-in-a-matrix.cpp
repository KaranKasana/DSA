class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> ans(n-2, vector<int>(n-2,0));;
        for(int i = 0; i <= n - 3; i++){
            for(int j = 0; j <= n-3; j++){
                for(int m = i; m < i+3; m++){
                    for(int n = j; n < j+3; n++){
                        ans[i][j] = max(ans[i][j], grid[m][n]);
                    }        
                }
            }
        }
        return ans;
    }
};