class Solution {
public:
    
    bool hasSameDigits(string s) {
        while(s.size() > 2){
            string s1;
            for(int i = 0; i < s.size() -1 ; i++){
                int first = s[i] - '0';
                int second = s[i+1] - '0';
                int Digit = (first + second) % 10;
                s1 += to_string(Digit);
            }
            s = s1;
        }
        return s[0] == s[1];
    }
};