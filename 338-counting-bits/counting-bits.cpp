class Solution {
public:
    int count_Bits(int n){
        int cnt = 0;
        while(n){
            int r = n % 2;
            if(r == 1) cnt++;
            n = n / 2;
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i = 0; i <= n; i++){
            ans.push_back(count_Bits(i));
        }
        return ans;
    }
};