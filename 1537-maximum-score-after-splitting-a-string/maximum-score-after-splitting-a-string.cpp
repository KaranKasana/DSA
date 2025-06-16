class Solution {
public:
    int maxScore(string s) {
        int total1 = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1') total1++;
        }
        int score = 0;
        int left = 0;
        for(int i = 0; i < s.length()-1; i++){
            if(s[i] == '0') left++;
            else total1--;
            score = max(score, left + total1);
        }
        return score;
    }
};