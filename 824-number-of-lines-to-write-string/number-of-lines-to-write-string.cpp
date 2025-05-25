class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int line = 1;
        int pixel = 0;
        for(int i = 0; i < s.length(); i++){
            if(pixel + widths[s[i] - 'a'] > 100){
                line++;
                pixel = 0;
            }
            pixel += widths[s[i] - 'a'];
        }
        return {line, pixel};
    }
};