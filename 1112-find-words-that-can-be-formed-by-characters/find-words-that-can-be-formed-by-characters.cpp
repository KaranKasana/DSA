class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int a[26] = {0};
        for(int i = 0; i < chars.length(); i++){
            a[chars[i] - 'a']++;
        }
        int ans = 0;
        for(int i = 0; i < words.size(); i++){
            int temp[26] = {0};
            for(int j = 0; j < words[i].length(); j++){
                temp[words[i][j] - 'a']++;
            }
            bool flag = true;
            for(int k = 0; k < 26; k++){
                if(temp[k] > a[k]) flag = false;
            }
            if(flag) ans += words[i].size();
        }
        return ans;
    }
};