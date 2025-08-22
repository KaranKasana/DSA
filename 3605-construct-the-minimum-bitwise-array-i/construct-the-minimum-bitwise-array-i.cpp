class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for(int i = 0; i < n; i++){
            int val = -1;
            for(int j = 1; j < nums[i]; j++){
                int bitOr = j | (j + 1);
                if(bitOr == nums[i]){
                    val = j;
                    break;
                }
            }
            ans.push_back(val);
        }
        return ans;
    }
};