class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_set<int> unique;
        int maxi = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxi) maxi = nums[i];
            if(nums[i] > 0) unique.insert(nums[i]);
        }
        if(maxi < 0) return maxi;
        int sum = 0;
        for(auto it : unique){
            sum += it;
        }
        return sum;
    }
};