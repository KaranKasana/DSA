class Solution {
public:
    int minDeletion(string s, int k) {
        unordered_map<char, int> mpp;
        for(int i = 0; i < s.length(); i++) mpp[s[i]]++;
        if(mpp.size() == k) return 0;
        vector<int> freq;
        for(auto& [ch, count] : mpp) freq.push_back(count);
        sort(freq.begin(), freq.end());
        int cnt = 0;
        int toRemove = mpp.size() - k;
        for(int i = 0; i < toRemove; i++) cnt += freq[i]; 
        return cnt;
    }
};