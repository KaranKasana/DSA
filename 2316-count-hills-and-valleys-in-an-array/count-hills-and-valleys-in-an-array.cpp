class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt = 0;
        int i = 1;
        while(i < nums.size() - 1){
            if(nums[i] == nums[i-1]){
                i++;
                continue;
            }
            int left = i - 1;
            int right = i + 1;
            while(left >= 0 && nums[left] == nums[i]) left--;
            while(right < nums.size() && nums[right] == nums[i]) right++;
            if(left >= 0 && right < nums.size()){
                if(nums[left] < nums[i] && nums[right] < nums[i]) cnt++;
                else if(nums[left] > nums[i] && nums[right] > nums[i]) cnt++;
            }
            i++;
        }
        return cnt;
    }
};