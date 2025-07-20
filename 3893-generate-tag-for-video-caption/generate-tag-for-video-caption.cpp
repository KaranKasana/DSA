class Solution {
public:
    string generateTag(string caption) {
        int n = caption.length();
        string ans = "#";
        int i = 0;
        bool flag = true;
        while(i < caption.length()){
            if(caption[i] == ' '){
                flag = true;
            }
            else{
                if(flag){
                    ans += toupper(caption[i]);
                    flag = false;
                }
                else ans += tolower(caption[i]);
            }
            i++;
        }
        if(ans.length() > 1) ans[1] = tolower(ans[1]);
        if(ans.length() > 100) ans = ans.substr(0, 100);
        return ans;
    }
};