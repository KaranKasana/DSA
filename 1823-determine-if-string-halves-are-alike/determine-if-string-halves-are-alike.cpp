class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_set<char> map = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = -1, right = s.length(), equal = 0;

        while(++left < --right){
            if(map.count(s[left])) equal++;
            if(map.count(s[right])) equal--;
        }

        return equal == 0;
    }
};