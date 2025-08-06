class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            int len = 0; 
            bool flag = false;
            for(int j = i; j < nums.size(); j++){
                if(nums[i] == nums[j] && !flag){
                    len++;
                    flag = true;
                }
                else if(nums[i] + 1 == nums[j] && flag){
                    len++;
                    flag = false;
                }
                else break;
            }
            cnt = max(cnt, len);
        }
        if(cnt == 1) return -1;
        return cnt;
    }
};