class Solution {
public:
    int minimizedStringLength(string s) {
        vector<int> unique(26, 0);
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(!unique[s[i] - 'a']){
                unique[s[i] - 'a'] = 1;
                cnt++;
            }
        }
        return cnt;
    }
};