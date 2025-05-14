class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        int ans = -1;
        for(auto it: mpp){
            if(it.second * 2 == nums.size()){
                ans = it.first;
            }
        }
        return ans;
    }
};