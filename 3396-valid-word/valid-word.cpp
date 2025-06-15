class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    bool isValid(string word) {
        if(word.length() < 3) return false;
        int vowel = 0, consonant = 0;
        for(int i = 0; i < word.length(); i++){
            if(isdigit(word[i])) continue;
            if(isalpha(word[i])){
                if(isVowel(word[i])) vowel++;
                else if(!isVowel(word[i])) consonant++;
            }
            else return false;
        }
        return vowel >= 1 && consonant >=1 ;
    }
};