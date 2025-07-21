class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        for(int i = 0; i <= s.length() - k; i++){
            bool flag = true;
            for(int j = i; j < i + k - 1; j++){
                if(s[j] != s[j + 1]){
                    flag = false;
                    break;
                }
            }
            if(!flag) continue;
            else{
                if(i > 0){
                    if(s[i] == s[i - 1]) flag = false;
                }
                if(i < s.length() - 1){
                    if(s[i] == s[i + k]) flag = false;
                }
            }
            if(flag) return true;
        }
        return false;
    }
};