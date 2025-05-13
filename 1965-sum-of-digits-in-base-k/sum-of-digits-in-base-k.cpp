class Solution {
public:
    int sumBase(int n, int k) {
        int res = 0;
        while(n){
            int r = n % k;
            res += r;
            n = n / k;
        }
        return res;
    }
};