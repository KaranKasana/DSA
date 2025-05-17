class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size(); 
        int sumEven = 0, sumOdd = 0;
        int i = 0, j = 1;
        while(i < n || j < n){
            if(i < n){
                sumEven += num[i] - '1' + 1;
                i += 2;
            }
            if(j < n){
                sumOdd += num[j] - '1' + 1;
                j += 2;
            }
        }
        return sumEven == sumOdd;
    }
};