class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int cntOp = 0;
        for(int j = 0; j < grid[0].size(); j++){
            for(int i = 1; i < grid.size(); i++){
                if(grid[i][j] > grid[i-1][j]) continue;
                else{
                    int n = grid[i-1][j] - grid[i][j] + 1;
                    grid[i][j] += n;
                    cntOp += n;
                }
            }
        }
        return cntOp;
    }
};