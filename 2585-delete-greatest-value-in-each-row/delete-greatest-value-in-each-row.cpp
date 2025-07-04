class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans = 0;
        while(grid[0].size() != 0){
            int greatest = INT_MIN;
            for(int i = 0; i < grid.size(); i++){
                auto it = max_element(grid[i].begin(), grid[i].end());
                greatest = max(greatest, *it);
                grid[i].erase(it); 
            }
            ans += greatest;
        }
        return ans;
    }
};