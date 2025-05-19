class Solution {
public:
    int xorOperation(int n, int start) {
        int i = 0;
        int ans = 0;
        while(i < n){
            int temp = start + 2 * i;
            ans = ans ^ temp;
            i++;
        } 
        return ans;
    }
};