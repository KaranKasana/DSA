class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.length(); i++) mpp[s[i]]++;
        int odd = INT_MIN, even = INT_MAX;
        for(auto it : mpp){
            if(it.second % 2 != 0 && it.second > odd) odd = it.second;
            else if(it.second % 2 == 0 && it.second < even) even = it.second;
        }
        return odd - even;
    }
};