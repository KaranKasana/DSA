class Solution {
public:
    int getMaximumGenerated(int n){
        if(n <= 1) return n;
        vector<int> nums(n+1);
        nums[0] = 0; nums[1] = 1;
        for(int i = 1; 2 * i + 1 <= n; i++){
            nums[2 * i] = nums[i];
            nums[2 * i + 1] = nums[i] + nums[i + 1];
        }
        return *max_element(nums.begin(), nums.end());
    }
};