class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = *max_element(nums.begin(), nums.end());
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == largest) ans = i;
            else if(nums[i] * 2 > largest) return -1; 
        }
        return ans;
    }
};