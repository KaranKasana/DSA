class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        int key = 0;
        int n = 1;
        for(int i = 0; i < 4; i++){
            int r1 = num1 % 10;
            int r2 = num2 % 10;
            int r3 = num3 % 10;
            key = key +  n * min({r1,r2,r3});
            n = n*10;
            num1 = num1/10;
            num2 = num2/10;
            num3 = num3/10;
        }
        return key;
    }
};