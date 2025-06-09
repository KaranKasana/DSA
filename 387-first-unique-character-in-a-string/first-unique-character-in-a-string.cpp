class Solution {
public:
    int firstUniqChar(string s) {
        int hasharr[26] = {0};
        for(int i = 0; i < s.length(); i++){
            hasharr[s[i] - 'a']++;
        }
        for(int i = 0; i < s.length(); i++){
            if(hasharr[s[i] - 'a'] == 1) return i;
        }
        return -1;
    }
};