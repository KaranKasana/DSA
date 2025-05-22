class Solution {
public:
    bool canAliceWin(int n) {
        bool winner = false;
        for(int pick = 10; pick > 0; pick--){
            if(n - pick < 0) return winner;
            n = n - pick;
            winner = !winner;
        }
        return winner;
    }
};