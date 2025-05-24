class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int cnt = 0;
        string s = to_string(num);
        for(int i = 0; i <= s.length() - k; i++){
            int substring = stoi(s.substr(i , k));
            if(substring != 0  && num % substring == 0){
                cnt++;
            }
        }
        return cnt;
    }
};