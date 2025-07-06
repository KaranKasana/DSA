class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int res = 0;
        unordered_set<string> s;
        for(int i = 0; i < words.size(); i++){
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if(s.find(rev) != s.end()) res++;
            else s.insert(words[i]);
        }
        return res;
    }
};