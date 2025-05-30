class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        int n = s.length();
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n/2; i++){
            if(st.find(s[i]) != st.end()) cnt1++;
            if(st.find(s[i + n/2]) != st.end()) cnt2++;
        }
        return cnt1 == cnt2;
    }
};