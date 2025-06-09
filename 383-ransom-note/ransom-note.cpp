class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int hasharr[26] = {0};
        for(int i = 0; i < magazine.length(); i++){
            hasharr[magazine[i] - 'a']++;
        }
        for(int i = 0; i < ransomNote.length(); i++){
            if(hasharr[ransomNote[i] - 'a']) hasharr[ransomNote[i] - 'a']--;
            else return false;
        }
        return true;
    }
};