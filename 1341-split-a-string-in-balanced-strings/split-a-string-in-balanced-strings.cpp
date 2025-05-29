class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0;
        int noR = 0, noL = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R') noR++;
            else noL++;
            if(noR == noL) cnt++;
        }
        return cnt;
    }
};