class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int cnt = 0;
        int i = 1;
        while(i < nums.size()){
            int sum1 = accumulate(nums.begin(), nums.begin()+i, 0);
            int sum2 = accumulate(nums.begin()+i, nums.end(), 0 );
            if((sum1-sum2) % 2 == 0) cnt++;
            i++;
        }
        return cnt;
    }
};