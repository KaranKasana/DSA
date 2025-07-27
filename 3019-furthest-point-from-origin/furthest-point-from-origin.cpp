class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cntLeft = 0, cntRight = 0;
        for(int i = 0; i < moves.length(); i++){
            if(moves[i] == 'L') cntLeft++;
            else if(moves[i] == 'R') cntRight++;
        }
        int dash = moves.length() - (cntLeft + cntRight);
        if(cntLeft >= cntRight){
            return dash + cntLeft - cntRight;
        }
        return dash + cntRight - cntLeft;
    }
};