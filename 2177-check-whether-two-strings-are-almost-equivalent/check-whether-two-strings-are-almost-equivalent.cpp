class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> v(26, 0);
        for(int i = 0; i < word1.length(); i++){
            v[word1[i] - 'a']++;
            v[word2[i] - 'a']--;
        }     
        for(int i = 0; i < v.size(); i++){
            if(abs(v[i]) > 3) return false;
        }
        return true;
    }
};