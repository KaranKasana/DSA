class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<int> ans;
        for(int i = 0; i < rows; i++){
            int col = -1;
            int minimum = INT_MAX;
            for(int j = 0; j < columns; j++){
                if(matrix[i][j] < minimum){
                    minimum = matrix[i][j];
                    col = j;
                }
            }
            int maximum = INT_MIN;
            for(int i = 0; i < rows; i++){
                maximum = max(maximum, matrix[i][col]);
            }
            if(maximum == minimum) ans.push_back(maximum);
        }
        return ans;
    }
};