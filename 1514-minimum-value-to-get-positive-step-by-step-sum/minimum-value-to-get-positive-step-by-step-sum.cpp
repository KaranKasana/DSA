class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0, minimum = INT_MAX;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            minimum = min(minimum, sum);
        }
        if(minimum < 0) return 1 - minimum;
        return 1;
    }
};