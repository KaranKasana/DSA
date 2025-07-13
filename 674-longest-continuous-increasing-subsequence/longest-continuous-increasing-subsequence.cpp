class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0;
        int cnt = 1;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] < nums[i+1]){
                cnt++;
            }
            else{
                res = max(res, cnt);
                cnt = 1;
            }
        }
        res = max(res, cnt);
        return res;
    }
};