class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2; j++){
                int black = 0, white = 0;
                if(grid[i][j] == 'B') black++;
                else white++;
                if(grid[i][j + 1] == 'B') black++;
                else white++;
                if(grid[i + 1][j] == 'B') black++;
                else white++;
                if(grid[i + 1][j + 1] == 'B') black++;
                else white++;
                if(white >= 3 || black >= 3) return true;
            } 
        }
        return false;
    }
};