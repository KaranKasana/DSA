class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i = n; i < n + 10; i++){
            int temp = i;
            int prod = 1; 
            while(temp){
                int r = temp % 10;
                prod = prod * r;
                temp = temp / 10;
            }
            if(prod % t == 0) return i; 
        }
        return -1;
    }
};