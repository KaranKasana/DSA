class Solution {
public:
    int maximum69Number (int num) {
        int n = num;
        int pos = 0, rd = -1;
        while(n){
            int r = n % 10;
            if(r == 6) rd = pos;
            pos++;
            n = n / 10;
        }
        if(rd == -1) return num;
        return num + 3 * pow(10, rd);
    }
};