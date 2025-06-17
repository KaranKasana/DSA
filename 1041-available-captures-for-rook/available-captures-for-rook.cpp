class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int ans = 0;
        for(int i = 0; i < 8; i++){
            for(int j = 0; j < 8; j++){
                if(board[i][j] == 'R'){
                    int left = j, right = j;
                    int up = i, down = i;
                    while(left >= 0){
                        if(board[i][left] == 'B') break;
                        else if(board[i][left] == 'p'){
                            ans++;
                            break;
                        } 
                        left--;
                    }
                    while(right < 8){
                        if(board[i][right] == 'B') break;
                        else if(board[i][right] == 'p'){
                            ans++;
                            break;
                        }
                        right++;
                    }
                    while(up >= 0){
                        if(board[up][j] == 'B') break;
                        else if(board[up][j] == 'p'){
                            ans++;
                            break;
                        }
                        up--;
                    }
                    while(down < 8){
                        if(board[down][j] == 'B') break;
                        else if(board[down][j] == 'p'){
                            ans++;
                            break;
                        }
                        down++;
                    }
                }
            }
        }
        return ans;
    }
};