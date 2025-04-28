class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0, cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 1) cnt++;
            else cnt = 0;
            maxcount = max(maxcount, cnt);
        }
        return maxcount;
    }
};