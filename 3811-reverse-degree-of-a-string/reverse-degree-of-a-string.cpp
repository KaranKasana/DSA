class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0;
        for(int i = 0; i < s.size(); i++){
            degree += ('a' - s[i] + 26) * (i+1); 
        }
        return degree;
    }
};