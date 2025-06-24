class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int ans = events[0][0];
        int maximum = events[0][1];
        for(int i = 1; i < events.size(); i++){
            int time = events[i][1] - events[i-1][1];
            if(time > maximum){
                maximum = events[i][1] - events[i-1][1];
                ans = events[i][0];
            }
            else if(time == maximum) ans = min(ans, events[i][0]);
        }
        return ans;
    }
};