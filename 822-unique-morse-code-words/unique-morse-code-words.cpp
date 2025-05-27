class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        for(int i = 0; i < words.size(); i++){
            string s1 = "";
            for(int j = 0; j < words[i].size(); j++){
                s1 += morse[words[i][j] - 'a'];
            }
            s.insert(s1);
        }
        return s.size();
    }
};