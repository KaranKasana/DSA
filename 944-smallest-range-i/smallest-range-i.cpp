class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            minimum = min(minimum, nums[i]);
            maximum = max(maximum, nums[i]);
        }
        return max(0, maximum - minimum - 2*k);
    }
};