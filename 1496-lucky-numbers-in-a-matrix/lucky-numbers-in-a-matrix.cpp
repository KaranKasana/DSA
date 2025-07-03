class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i = 0; i < matrix.size(); i++){
            int index = -1;
            int minimum = INT_MAX;
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] < minimum){
                    minimum = matrix[i][j];
                    index = j;
                }
            }
            int maximum = INT_MIN;
            for(int j = 0; j < matrix.size(); j++){
                maximum = max(maximum, matrix[j][index]);
            }
            if(maximum == minimum) ans.push_back(maximum);
        }
        return ans;
    }
};