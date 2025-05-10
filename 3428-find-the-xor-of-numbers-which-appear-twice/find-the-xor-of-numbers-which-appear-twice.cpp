class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        int hasharr[51] = {0};
        for(int i = 0; i < nums.size(); i++){
            hasharr[nums[i]]++;
        }
        int ans = 0;
        for(int i = 1; i < 51; i++){
            if(hasharr[i] == 2){
                ans = ans ^ i;
            }
        }
        return ans;
    }
};