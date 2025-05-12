class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int largest = 0;
        bool flag = false;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] + nums[j] == 0){
                    largest = max(largest, abs(nums[i]));
                    flag = true;
                }
            }
        }
        if(flag == false) return -1;
        return largest;
    }
};