class Solution {
public:
    string digitSum(string s, int k) {
        while(s.length() > k){
            int n = s.length();
            string temp = "";
            for(int i = 0; i < n; i += k){
                int sum = 0;
                for(int j = i; j < i + k && j < n; j++) sum += s[j] - '0';
                temp += to_string(sum);
            }
            s = temp;
        }
        return s;
    }
};