class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for(int i = 0; i < n; i++) mpp[nums[i]]++;
        if(k == 1){
            int maxi = -1;
            for(auto it : mpp){
                if(it.second == 1 && it.first > maxi) maxi = it.first;
            }
            return maxi;
        }
        else if(k == n){
            return *max_element(nums.begin(), nums.end());
        }
        else if(1 < k && k < n){
            int cnt1 = mpp[nums[0]];
            int cnt2 = mpp[nums[n - 1]];
            if(cnt1 == 1 && cnt2 == 1) 
                return nums[0] > nums[n-1] ? nums[0] : nums[n-1];
            else if(cnt1 == 1 && cnt2 != 1) return nums[0];
            else if(cnt1 != 1 && cnt2 == 1) return nums[n-1];
        }
        return -1;
    }
};