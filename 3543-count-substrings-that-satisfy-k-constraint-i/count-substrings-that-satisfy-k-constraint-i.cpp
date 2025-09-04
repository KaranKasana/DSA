class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            int nZeroes = 0, nOnes = 0;
            for(int j = i; j < s.size(); j++){
                if(s[j] == '0') nZeroes++;
                else if(s[j] == '1') nOnes++;
                if(nZeroes <= k || nOnes <= k) cnt++;
                else if(nZeroes > k && nOnes > k) break;
            }
        }
        return cnt;
    }
};