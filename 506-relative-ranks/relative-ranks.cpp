class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < score.size(); i++){
            mpp[score[i]] = i;
        }
        sort(score.begin(), score.end(), greater<int>());
        vector<string> ans(n);  
        for(int i = 0; i < n; i++){
            int index = mpp[score[i]];
            if(i == 0) ans[index] = "Gold Medal";
            else if(i == 1) ans[index] = "Silver Medal";
            else if(i == 2) ans[index] = "Bronze Medal";
            else ans[index] = to_string(i+1);
        }
        return ans;
    }
};