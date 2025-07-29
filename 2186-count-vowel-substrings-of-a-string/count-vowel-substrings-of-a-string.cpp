class Solution {
public:
    bool isVowel(char c){
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
        return false;
    }
    int countVowelSubstrings(string word) {
        int n = word.length();
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(!isVowel(word[i])) continue;
            unordered_map<char, int> mpp;
            for(int j = i; j < n && isVowel(word[j]); j++){
                mpp[word[j]]++;
                if(mpp.size() == 5) ans++;
            }
        }
        return ans;
    }
};