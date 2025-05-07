class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] <= nums[i-1]){
                int val = nums[i-1] - nums[i] + 1;
                nums[i] += val;
                cnt += val;
            }
        }
        return cnt;
    }
};