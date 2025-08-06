class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int ans = logs[0][0];
        int time = logs[0][1];
        int maxUnit = logs[0][1];
        for(int i = 1; i < logs.size(); i++){
            int unit = logs[i][1] - logs[i-1][1]; 
            if(unit > maxUnit){
                maxUnit = unit;
                ans = logs[i][0];
            }
            else if(unit == maxUnit && logs[i][0] < ans){
                ans = logs[i][0];
            }
        }
        return ans;
    }
};