class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> less, more, equal;
        for(int i = 0; i < n; i++){
            if(nums[i] == pivot) equal.push_back(nums[i]);
            else if(nums[i] < pivot) less.push_back(nums[i]);
            else more.push_back(nums[i]);
        }
        less.insert(less.end(), equal.begin(), equal.end());
        less.insert(less.end(), more.begin(), more.end());
        return less;
    }
};