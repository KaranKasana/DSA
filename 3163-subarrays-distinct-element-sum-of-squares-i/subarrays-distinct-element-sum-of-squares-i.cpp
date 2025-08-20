class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            set<int> dist; 
            for(int j = i; j < nums.size(); j++){
                dist.insert(nums[j]);
                ans += dist.size() * dist.size();
            }
            dist.clear();
        }
        return ans;
    }
};