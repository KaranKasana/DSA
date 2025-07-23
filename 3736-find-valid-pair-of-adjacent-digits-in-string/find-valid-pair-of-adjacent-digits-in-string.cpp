class Solution {
public:
    string findValidPair(string s) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < s.length(); i++){
            mpp[s[i] - '0']++;
        }
        for(int i = 0; i < s.length() - 1; i++){
            if( (s[i] != s[i + 1]) && ((s[i] - '0') == mpp[s[i] - '0'] && 
                (s[i + 1] - '0') == mpp[s[i + 1] - '0'])){
                return s.substr(i, 2);
            }
        }
        return "";
    }
};