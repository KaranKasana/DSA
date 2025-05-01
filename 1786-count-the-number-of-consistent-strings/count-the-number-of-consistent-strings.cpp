class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int hasharr[27] = {0}; 
        for(int i = 0; i < allowed.size(); i++){
            hasharr[allowed[i] - 'a' + 1]++;
        }
        int res = 0;
        for(int i = 0; i < words.size(); i++){
            bool flag = true;
            for(int j = 0; j < words[i].size(); j++){
                if(hasharr[words[i][j] -'a' + 1] == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) res++;
        }
        return res;
    }
};