class Solution {
public:
    int smallestNumber(int n) {
        double r = log(2) / log(n);
        int i = (1 / r) + 1;
        while(true){
            if(pow(2,i) > n) return pow(2,i) - 1;
            i++;
        }
        return -1;
    }
};