class Solution {
public:

    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            int temp = nums[i];
            int sum = 0;
            while(temp){
                int r = temp % 10;
                sum += r;
                temp = temp / 10;
            }
            if(sum == i) return i;
        }
        return -1;
    }
};