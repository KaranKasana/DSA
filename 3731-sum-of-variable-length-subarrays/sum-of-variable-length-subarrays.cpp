class Solution {
public:
    int subarraySum(vector<int>& nums) {
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            int start = max(0, i - nums[i]);
            int sum = accumulate(nums.begin() + start, nums.begin() + i+1, 0);
            totalSum += sum;
        }
        return totalSum;
    }
};