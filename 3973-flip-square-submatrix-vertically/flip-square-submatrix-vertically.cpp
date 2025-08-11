class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        int i = x, j = x + k - 1;
        while(i < j){
            for(int m = y; m <= y + k - 1; m++){
                swap(grid[i][m], grid[j][m]);
            }
            i++;
            j--;
        }
        return grid;
    }
};