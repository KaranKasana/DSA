class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n- 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(nums[mid] >= target){
                n = mid;
                r = r - 1;
            }
            else l = mid + 1;
        }
        return n;
    }
};