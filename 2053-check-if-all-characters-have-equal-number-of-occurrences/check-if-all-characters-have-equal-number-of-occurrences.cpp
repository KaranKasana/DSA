class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int hasharr[26] = {0};
        for(int i = 0; i < s.length(); i++){
            hasharr[s[i] - 'a']++;
        }
        int num = hasharr[s[0] - 'a'];
        for(int i = 0; i < 26; i++){
            if(hasharr[i] && hasharr[i] != num) return false;
        }
        return true;
    }
};