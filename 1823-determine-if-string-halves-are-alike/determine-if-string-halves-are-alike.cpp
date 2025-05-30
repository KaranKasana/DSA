class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> st = {'a','e','i','o','u','A','E','I','O','U'};
        int left = 0, right = s.length()-1,n = 0;
        while(left < right){
            if(st.find(s[left]) != st.end()) n++;
            if(st.find(s[right]) != st.end()) n--;
            left++;
            right--;
        }
        return n == 0;
    }
};