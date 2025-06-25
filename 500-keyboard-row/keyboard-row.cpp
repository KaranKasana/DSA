class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string first = "qwertyuiop", second = "asdfghjkl", third = "zxcvbnm";
        int a[26];
        for(int i = 0; i < first.length(); i++) a[first[i] - 'a'] = 1;
        for(int i = 0; i < second.length(); i++) a[second[i] - 'a'] = 2;
        for(int i = 0; i < third.length(); i++) a[third[i] - 'a'] = 3;
        vector<string> ans;
        for(int i = 0; i < words.size(); i++){
            bool flag = true;
            for(int j = 1; j < words[i].length(); j++){
                if(a[tolower(words[i][j]) - 'a'] != a[tolower(words[i][0]) - 'a']){
                    flag = false;
                    break;
                } 
            }
            if(flag) ans.push_back(words[i]);
        }
        return ans;
    }
};