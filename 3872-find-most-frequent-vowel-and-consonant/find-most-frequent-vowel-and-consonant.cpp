class Solution {
public:
    int maxFreqSum(string s) {
        int hasharr[27] = {0};
        for(int i = 0; i < s.size(); i++){
            hasharr[s[i] - 'a'+ 1]++;
        }
        int freqVowel = 0, freqConsonant = 0;
        for(int i = 1; i < 27; i++){
            if(i == 1 || i == 5 || i == 9 || i == 15 || i == 21){
                freqVowel = max(freqVowel, hasharr[i]);
            }
            else freqConsonant = max(freqConsonant, hasharr[i]);
        }
        return freqVowel + freqConsonant; 
    }
};