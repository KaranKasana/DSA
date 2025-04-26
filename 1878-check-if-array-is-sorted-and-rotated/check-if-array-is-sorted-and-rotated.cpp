class Solution {
public:
    bool arraySortedOrNot(vector<int>& nums) {
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] >= nums[i-1]) continue;
            else return false;
        }
        return true;
    }
    bool check(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            int temp = nums[0];
            for(int j = 0; j < n-1; j++){
                nums[j] = nums[j+1];
            }
            nums[n-1] = temp;
            if(arraySortedOrNot(nums)) return true;
        }
        return false;
    }
};