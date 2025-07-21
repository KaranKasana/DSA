class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n = s.length();
        int j = 0;
        for(int i = 0; i < n; i++){
            if(s[j] == s[i]) continue;
            if(i - j == k) return true;
            j = i;
        }
        return (n - j) == k;
    }
};