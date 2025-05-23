class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
        }
        vector<int> res;
        for(auto it : mpp){
            if(it.second == 2) res.push_back(it.first);
        }
        return res;
    }
};