class Solution {
public:
    int secondHighest(string s) {
        int first = -1, second = -1;
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                if(s[i] - '0' > first){
                    second = first;
                    first = s[i] - '0';
                }
                else if(s[i] - '0' < first && s[i] - '0' > second) {
                    second = s[i] - '0';
                }
            }
        }
        return second;
    }
};