class Solution {
public:
    string thousandSeparator(int n) {
        if(n == 0) return "0";
        string s = "";
        int cnt = 0;
        while(n ){
            int r = n % 10;
            s = to_string(r) + s;
            cnt++;
            if(cnt % 3 == 0){
                s = '.' + s;
                cnt = 0;
            }
            n = n / 10;
        }
        if(s[0] == '.') s.erase(0, 1);
        return s;
    }
};