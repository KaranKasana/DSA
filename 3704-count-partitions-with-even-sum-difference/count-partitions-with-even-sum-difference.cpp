class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt = 0; 
        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int rightSum = totalSum, leftSum = 0; 
        for(int i = 0; i < nums.size()-1; i++){
            rightSum = rightSum - nums[i];
            leftSum = leftSum + nums[i];
            if((rightSum - leftSum) % 2 == 0) cnt++;
        }
        return cnt;
    }
};