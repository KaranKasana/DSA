class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0, odd = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] % 2 == 0) even++;
            else odd++;
        }
        vector<int> ans;
        while(even){
            ans.push_back(0);
            even--;
        }
        while(odd){
            ans.push_back(1);
            odd--;
        }
        return ans;
    }
};