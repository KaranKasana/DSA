class Solution {
public:
    int numberOfChild(int n, int k) {
        k = k % (n*2 - 2);
        if(k < n) return k;
        for(int i = 0 ; i < n-1; i++){
            if(((n*2) - (i+2)) == k) return i;
        }
        return -1;
    }
};