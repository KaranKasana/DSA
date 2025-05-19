class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        for(int i = 0; i < words.size(); i++){
            bool flag = true;
            if(words[i].length() >= pref.length()){
                for(int j = 0; j < pref.length(); j++){
                    if(pref[j] != words[i][j]){
                        flag = false;
                    } 
                }
                if(flag == true) cnt++;
            }    
        }
        return cnt;
    }
};