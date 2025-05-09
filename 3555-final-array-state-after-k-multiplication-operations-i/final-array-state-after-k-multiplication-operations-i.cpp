class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k){
            int minimum = INT_MAX;
            int pos = -1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] < minimum){
                    minimum = nums[i];
                    pos = i;
                } 
            }
            nums[pos] = nums[pos] * multiplier;
            k--;
        }
        return nums;
    }
};