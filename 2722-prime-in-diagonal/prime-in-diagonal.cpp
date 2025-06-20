class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n == 2 || n == 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for (int i = 5; i <= sqrt(n); i = i + 6){
            if(n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i].size(); j++){
                if(i == j || i + j == nums.size() - 1){
                    if(isPrime(nums[i][j])) ans = max(ans, nums[i][j]);
                }
            }
        }
        return ans;
    }
};