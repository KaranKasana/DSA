class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> unique;
        for(char c : s) unique.insert(c);
        return unique.size();
    }
};