class Solution {
public:
    static bool comp(int a, int b) {
        return a > b;
    }
    bool isMonotonic(vector<int>& nums) {
        if(is_sorted(nums.begin(), nums.end())) return true;
        if(is_sorted(nums.begin(), nums.end(), comp)) return true;
        return false;
    }
};