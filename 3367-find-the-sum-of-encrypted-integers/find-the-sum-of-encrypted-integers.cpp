class Solution {
public:
    int encrypt(int x){
        int largest = 0, cnt = 0, New = 0;
        while(x){
            largest = max(largest, x % 10);
            x = x / 10;
            cnt++;
        }
        while(cnt){
            New = New * 10 + largest;
            cnt--;
        }
        return New;
    }
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += encrypt(nums[i]);
        }
        return sum;
    }
};