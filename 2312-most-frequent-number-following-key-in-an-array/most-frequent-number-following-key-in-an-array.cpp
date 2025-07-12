class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int, int> mpp;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == key){
                mpp[nums[i]]++;
            }
        }
        int maxi = 0, res = 0;
        for(auto it : mpp){
            if(it.second > maxi){
                maxi = it.second;
                res = it.first;
            }
        }
        return res;
    }
};