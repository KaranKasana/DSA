class Solution {
public:
    int winningPlayerCount(int n, vector<vector<int>>& pick) {
        vector<vector<int>> players(n, vector<int>(11));
        for(int i = 0; i < pick.size(); i++){
            int player = pick[i][0];
            int ball = pick[i][1];
            players[player][ball]++;
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= 10; j++){
                if(players[i][j] >= i + 1){
                    cnt++;
                    break;
                } 
            }
        }
        return cnt;
    }
};