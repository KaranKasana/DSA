class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int cntOp = 0;
        unordered_set<int> st;
        int i = 0;
        while(n - i >= 3){
            st.clear();
            st.insert(nums.begin() + i, nums.end());
            if(st.size() == n - i) return cntOp;
            cntOp++;
            i = i + 3;
        }
        st.clear();
        st.insert(nums.begin() + i, nums.end());
        if(st.size() == n - i) return cntOp;
        cntOp++;
        return cntOp;
    }
};