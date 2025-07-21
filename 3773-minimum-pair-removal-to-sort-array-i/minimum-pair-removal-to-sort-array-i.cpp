class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;
        while(!is_sorted(nums.begin(), nums.end())){
            int j = nums.size();
            int sum = INT_MAX;
            for(int i = nums.size() - 1; i > 0; i--){
                int psum = nums[i] + nums[i-1];
                if(psum <= sum){
                    sum = psum;
                    j = i - 1;
                } 
            }
            nums[j] = sum;
            nums.erase(nums.begin()+ j + 1);
            cnt++;
        }
        return cnt;
    }
};