class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r * c != mat.size() * mat[0].size()) return mat;
        vector<vector<int>> ans(r, vector<int>(c));
        vector<int> val;
        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[i].size(); j++){
                val.push_back(mat[i][j]);
            }
        }
        int k = 0;
        for(int i = 0; i < ans.size(); i++){
            for(int j = 0; j < ans[i].size(); j++){
                ans[i][j] = val[k];
                k++;
            }
        }
        return ans;
    }
};