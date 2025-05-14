class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even = 0, odd = 0; 
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0){
                swap(nums[odd], nums[even]);
                odd++;
            }    
            even++;
        }
        return nums;
    }
};