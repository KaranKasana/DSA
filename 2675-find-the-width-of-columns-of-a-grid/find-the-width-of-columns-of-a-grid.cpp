class Solution {
public:
    int digitCount(int n){
        if(n == 0) return 1;
        int temp = abs(n);
        int cnt = 0;
        while(temp){
            int r = temp % 10;
            cnt++;
            temp = temp/ 10;
        }
        if(n < 0) return cnt + 1;
        return cnt;
    }
    vector<int> findColumnWidth(vector<vector<int>>& grid) {
        vector<int> ans(grid[0].size());
        for(int j = 0; j < grid[0].size(); j++){
            int num = 0;
            for(int i = 0; i < grid.size(); i++){
                num = max(num, digitCount(grid[i][j]));
            }
            ans[j] = num;
        }
        return ans;
    }
};