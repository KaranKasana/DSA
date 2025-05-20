class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        bool flag = true;
        while(flag){
            flag = true;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] == original){
                    original = 2 * original;
                    flag = true;
                    break;
                }
                else flag = false;
            }
            if(flag == false) break;
        }
        return original;
    }
};