class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.size() < k){
            string s1 = "";
            for(int i = 0; i < s.size(); i++){
                if(s[i] == 'z') s1.push_back('a');
                s1.push_back(s[i] + 1);
            }
            s += s1;
        }
        return s[k-1];
    }
};