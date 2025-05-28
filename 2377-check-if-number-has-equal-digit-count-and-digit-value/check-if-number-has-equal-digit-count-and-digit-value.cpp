class Solution {
public:
    bool digitCount(string num) {
        int hasharr[10] = {0};
        for(int i = 0; i < num.length(); i++){
            hasharr[num[i] - '0']++;
        }
        for(int i = 0; i < num.length(); i++){
            if(hasharr[i] != num[i] - '0') return false;
        }
        return true;
    }
};