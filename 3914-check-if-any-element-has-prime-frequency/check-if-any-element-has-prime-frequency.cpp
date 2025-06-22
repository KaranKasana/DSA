class Solution {
public:
    bool isPrime(int n){
        if(n <= 1) return false;
        if(n <= 3) return true;
        if(n % 2 == 0 || n % 3 == 0) return false;
        for(int i = 5; i * i <= n; i = i + 6){
            if(n % i == 0 || n % (i + 2) == 0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& nums) {
        int arr[101] = {-1};
        for(int i = 0; i < nums.size(); i++){
            if(arr[nums[i]] == -1) arr[nums[i]] = 1;
            else arr[nums[i]]++;
        }
        for(int i = 0; i < 101; i++){
            if(arr[i] != -1 && isPrime(arr[i])) return true;
        }
        return false;
    }
};