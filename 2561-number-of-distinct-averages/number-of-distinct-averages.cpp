class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        unordered_set<float> avg;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n/2; i++){
            float average = (float)(nums[i] + nums[n-i-1]) / 2;
            avg.insert(average);
        }
        return avg.size();
    }
};