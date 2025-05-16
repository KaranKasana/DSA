class Solution {
public:
    int numberOfSpecialChars(string word) {
        int hasharr[53] = {0};
        for(int i = 0; i < word.size(); i++){
            if(islower(word[i]) && !hasharr[word[i] - 'a' + 1]){
                hasharr[word[i] - 'a' + 1]++;
            }
            else if(isupper(word[i]) && !hasharr[word[i] - 'A' + 27]){
                hasharr[word[i] - 'A' + 27]++;
            }
        }
        int cnt = 0;
        for(int i = 1; i < 27; i++){
            if(hasharr[i] && hasharr[i+26]) cnt++;
        }
        return cnt;
    }
};