class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> s;
        for(int i = 0; i < banned.size(); i++) s.insert(banned[i]);
        unordered_map<string, int> mpp;
        string word = "";
        int i = 0;
        while(i <= paragraph.length()){
            if(i < paragraph.length() && isalpha(paragraph[i])){
                word += tolower(paragraph[i]);
            }
            else{
                if(!word.empty()){
                    if(!s.count(word)){
                        mpp[word]++;
                    }
                    word.clear();
                }
            }
            i++;
        }
        string result = "";
        int maxCount = 0;
        for(auto& it : mpp){
            if(it.second > maxCount){
                maxCount = it.second;
                result = it.first;
            }
        }
        return result;
    }
};
