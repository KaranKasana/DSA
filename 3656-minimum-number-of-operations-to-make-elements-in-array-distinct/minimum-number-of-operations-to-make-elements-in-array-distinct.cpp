class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_set<int> seen;
        for(int i = nums.size() - 1; i >= 0; i--){
            if(!seen.count(nums[i])) seen.insert(nums[i]);
            else return (i + 1 + 2) / 3;
        }
        return 0;
    }
};