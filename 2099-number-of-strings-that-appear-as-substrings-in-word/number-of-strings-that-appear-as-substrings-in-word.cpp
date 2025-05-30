class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        unordered_set<string> substrings;
        for(int i = 0; i < word.size(); i++){
            for(int j = i; j < word.size(); j++){
                substrings.insert(word.substr(i, j - i + 1));
            }
        }
        int cnt = 0;
        for(int i = 0; i < patterns.size(); i++){
            if(substrings.find(patterns[i]) != substrings.end()) cnt++;
        }  
        return cnt; 
    }
};