class Solution {
public:
    int minTimeToType(string word) {
        int res = 0;
        res += min(abs('a' - word[0]), 26 - abs('a' - word[0]));
        for(int i = 1; i < word.size(); i++){
            res += min(abs(word[i] - word[i - 1]), 26-abs(word[i] - word[i - 1]));
   
        }
        return res + word.size();
    }
};