class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        if(nums.size() == 1){
            if(nums[0] == 0) return 0;
            else return 1;
        }
        unordered_set<int> st;
        int zeroes = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) zeroes++;
            st.insert(nums[i]);
        }
        if(zeroes) return st.size() - 1;
        return st.size();
    }
};