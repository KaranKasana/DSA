class Solution {
public:
    string sortSentence(string s) {
        vector<string> order(9);
        int start = 0;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                string substring = s.substr(start, i - start);
                order[s[i] -'1'] = substring;
                start = i+2;
            }
            if(s[i] == ' ') i++;
        }
        string ans = "";
        for(int i = 0; i < order.size(); i++){
            if(order[i] != ""){
                ans += order[i];
                ans += ' ';
            }
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};