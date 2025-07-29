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
            unordered_set<char> st;
            for(int j = i; j < n && isVowel(word[j]); j++){
                st.insert(word[j]);
                if(st.size() == 5) ans++;
            }
        }
        return ans;
    }
};