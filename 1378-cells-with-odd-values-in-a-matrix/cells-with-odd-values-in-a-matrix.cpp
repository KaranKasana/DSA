class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<vector<int>> matrix(m, vector<int>(n));
        for(int i = 0; i < indices.size(); i++){
            for(int j = 0; j < matrix[indices[i][0]].size(); j++) {
                matrix[indices[i][0]][j]++;
            }
            for(int j = 0; j < matrix.size(); j++) {
                matrix[j][indices[i][1]]++;
            }
        }
        int cnt = 0;
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] % 2 != 0) cnt++;
            }
        }
        return cnt;
    }
};