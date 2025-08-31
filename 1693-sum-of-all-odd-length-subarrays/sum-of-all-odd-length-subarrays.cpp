class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int totalSum = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                int len = j - i + 1;
                if(len % 2 != 0){
                    for(int k = i; k <= j; k++){
                        totalSum += arr[k];
                    }
                }
            }
        }
        return totalSum;
    }
};