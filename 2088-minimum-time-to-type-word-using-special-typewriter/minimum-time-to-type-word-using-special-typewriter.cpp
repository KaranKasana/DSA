class Solution {
public:
    int minTimeToType(string word) {
        int res = 0;
        int dist = abs('a' - word[0]);
        res += min(dist, 26 - dist);
        for(int i = 1; i < word.size(); i++){
            dist = abs(word[i] - word[i - 1]);
            res += min(dist , 26 - dist);
   
        }
        return res + word.size();
    }
};