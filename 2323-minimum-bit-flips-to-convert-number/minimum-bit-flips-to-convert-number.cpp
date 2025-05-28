class Solution {
public:
    string toBinary(int num){
        string s;
        while(num){   
            int r = num % 2;
            s = to_string(r) + s;
            num = num / 2;
        }
        return s;
    }
    int minBitFlips(int start, int goal) {
        string num1, num2;
        if(start == 0) num1 = "0";
        else num1 = toBinary(start);
        if(goal == 0) num2 = "0";
        else num2 = toBinary(goal);
        int cnt = 0;
        int i = num1.size()-1, j = num2.size()-1;
        while(i >= 0 && j >= 0){
            if(num1[i] != num2[j]) cnt++;
            i--;
            j--;
        }
        while(i >= 0){
            if(num1[i] == '1') cnt++;
            i--;
        }
        while(j >= 0){
            if(num2[j] == '1') cnt++;
            j--;
        }
        return cnt;
    }
};