class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = accumulate(nums.begin(), nums.begin() + k, 0);
        double avg = sum / k;
        for(int i = 0; i < nums.size() - k; i++){
            sum -= nums[i];
            sum += nums[i + k];
            avg = max(avg, sum / k);
        }
        return avg;
    }
};