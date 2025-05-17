class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size(); 
        int sumEven = 0, sumOdd = 0;
        int i = 0, j = 1;
        while(i < n && j < n){
            sumEven += num[i] - '1' + 1;
            sumOdd += num[j] - '1' + 1;
            i += 2;
            j += 2;
        }
        if(i < n) sumEven += num[i] - '1' + 1;
        if(j < n) sumOdd += num[j] - '1' + 1;
        return sumEven == sumOdd;
    }
};