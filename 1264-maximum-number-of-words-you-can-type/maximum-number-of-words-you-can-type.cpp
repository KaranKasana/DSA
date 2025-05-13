class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int hasharr[27] = {0};
        for(int i = 0; i < brokenLetters.size(); i++){
            hasharr[brokenLetters[i] - 'a' + 1]++;
        }
        int cnt = 0;
        bool flag = true;
        for(int i = 0; i < text.size(); i++){
            if(text[i] == ' '){
                if(flag == true){
                    cnt++;
                }
                flag = true; 
            }
            else if(hasharr[text[i] - 'a' + 1] == 1){
                flag = false;
            }
        }
        if(flag == true) cnt++;
        return cnt;
    }
};