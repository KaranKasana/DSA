class Solution {
public:
    string greatestLetter(string s) {
        int hasharr[27] = {0};
        for(int i = 0; i < s.length(); i++){
            if(islower(s[i]) && hasharr[s[i] - 'a' + 1] == 0) hasharr[s[i] - 'a' + 1]++;       
        }
        for(int i = 0; i < s.length(); i++){
            if(isupper(s[i]) && hasharr[s[i] - 'A' + 1] == 1) hasharr[s[i] - 'A' + 1]++;
        }
        for(int i = 26; i > 0; i--){
            if(hasharr[i] == 2){
                char character = static_cast<char>(i + 64);
                string str(1, character);
                return str;
            } 
        }
        return "";

        
    }
};