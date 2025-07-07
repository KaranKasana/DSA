class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string> res;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].length(); j++){
                string s = "";
                while(j < words[i].length() && words[i][j] != separator){
                    s += words[i][j];
                    j++;
                }
                if(!s.empty()) res.push_back(s);
            }
        }
        return res;
    }
};