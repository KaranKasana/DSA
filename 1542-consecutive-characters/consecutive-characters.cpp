class Solution {
public:
    int maxPower(string s) {
        int ans = 0, len = 0;
        int i = 0, j = 0; 
        while(i < s.length() && j < s.length()){
            while(s[i] == s[j]){
                j++;
            }
            ans = max(ans, j - i);
            i = j;  
        }
        return ans;
    }
};