class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        for(int i = 0; i < words.size() - 1; i++){
            for(int j = i + 1; j < words.size(); j++){
                if(words[j].size() >= words[i].size()){
                    int len = words[i].size();
                    string prefix = words[j].substr(0, len);
                    string suffix = words[j].substr(words[j].size() - len, len);
                    if(words[i] == prefix && words[i] == suffix){
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};