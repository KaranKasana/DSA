class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int sum = 0, minimumPrefix = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            minimumPrefix = min(minimumPrefix, sum);
        }
        if(minimumPrefix < 0) return 1 - minimumPrefix;
        return 1;
    }
};