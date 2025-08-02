class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> wordCount;
        istringstream ss1(s1), ss2(s2);
        string word;
        while (ss1 >> word) wordCount[word]++;
        while (ss2 >> word) wordCount[word]++;
        vector<string> result;
        for (auto& [w, count] : wordCount) {
            if (count == 1) result.push_back(w);
        }
        return result;
    }
};