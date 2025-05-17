class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int hasharr[27] = {0};
        for(int i = 0; i < s.length(); i++){
            hasharr[s[i] - 'a' + 1] = i;
        } 
        int diff = 0;
        for(int i = 0; i < t.length(); i++){
            diff += abs(hasharr[t[i] - 'a' + 1] - i);
        }
        return diff;
    }
};