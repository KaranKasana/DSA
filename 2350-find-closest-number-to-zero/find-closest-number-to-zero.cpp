class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int largest = INT_MIN, distance = INT_MAX;
        int ans = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(abs(nums[i]) < distance){
                distance = abs(nums[i]);
                ans = nums[i];
            }
            else if(abs(nums[i]) == distance){
                ans = max(ans, nums[i]);
            }
        }
        return ans;
    }
};