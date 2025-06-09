class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        int temp = abs(num);
        string s = "";
        while(temp){
            int r = temp % 7;
            s = to_string(r) + s;
            temp = temp / 7;
        }
        if(num < 0) s = "-" + s;
        return s;
    }
};