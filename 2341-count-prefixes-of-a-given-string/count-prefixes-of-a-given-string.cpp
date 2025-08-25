class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            if(words[i].size() <= s.size()){
                bool flag = true;
                int j = 0;
                while(j < words[i].size()){
                    if(words[i][j] != s[j]) flag = false;
                    j++;
                }
                if(flag) cnt++;
            }
        }
        return cnt;
    }
};