class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        for(int i = 0; i < s.size(); i++){
            string s1 = "";
            while(s[i] != ' ' && i < s.size()){
                s1 += s[i];
                i++;
            }
            s1 += ' ';
            reverse(s1.begin(), s1.end());
            ans += s1;
        }
        ans.erase(0,1);
        return ans;
    }
};