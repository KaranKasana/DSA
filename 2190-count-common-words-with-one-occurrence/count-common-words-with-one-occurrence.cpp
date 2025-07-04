class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> m1, m2;
        for(int i = 0; i < words1.size(); i++) m1[words1[i]]++;
        for(int i = 0; i < words2.size(); i++) m2[words2[i]]++; 
        int cnt = 0;
        for(auto pair : m1){
            string word = pair.first;
            int freq = pair.second;
            if(freq == 1 && m2[word] == 1) cnt++;
        }
        return cnt;
    }
};