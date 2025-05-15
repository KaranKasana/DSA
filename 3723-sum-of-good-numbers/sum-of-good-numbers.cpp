class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            bool left = false;
            bool right = false;
            if(i - k >= 0){
                if(nums[i] > nums[i-k]) left = true;
                else left = false;
            }
            else left = true;
            if(i + k <= nums.size()-1){
                if(nums[i] > nums[i+k]) right = true;
                else right = false;
            }
            else right = true;
            if(left && right) sum += nums[i];
        }
        return sum;
    }
};