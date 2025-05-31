class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int maxVal = INT_MIN;
        for(int i = 0; i < strs.size(); i++){
            bool flag = true;
            int len = strs[i].length();
            for(int j = 0; j < len; j++){
                if(isalpha(strs[i][j])){
                    maxVal = max(maxVal, len);
                    flag = false;
                    break;
                }
            }
            if(flag) maxVal = max(maxVal, stoi(strs[i]));
        }
        return maxVal;
    }
};