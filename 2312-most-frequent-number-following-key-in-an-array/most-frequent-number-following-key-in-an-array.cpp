class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int arr[1001] = {0};
        for(int i = 1; i < nums.size(); i++){
            if(nums[i - 1] == key){
                arr[nums[i]]++;
            }
        }
        int maxi = 0, res = 0;
        for(int i = 1; i <= 1000; i++){
            if(arr[i] > maxi){
                maxi = arr[i];
                res = i;
            }
        }
        return res;
    }
};