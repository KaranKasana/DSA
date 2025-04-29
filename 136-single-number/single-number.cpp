class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor0 = 0;
        for(int i = 0; i < nums.size(); i++){
            xor0 = xor0 ^ nums[i];
        }
        return xor0;
    }
};