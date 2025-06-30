class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string ans = ""; 
        int arr[26] = {0};
        for(int i = 0; i < licensePlate.length(); i++){
            if(isalpha(licensePlate[i])){
                arr[tolower(licensePlate[i]) - 'a']++;
            } 
        }
        for(int i = 0; i < words.size(); i++){
            int temp[26] = {0};
            for(int j = 0; j < words[i].length(); j++){
                temp[words[i][j] - 'a']++;
            }
            bool flag = true;
            for(int k = 0; k < 26; k++){
                if(temp[k] < arr[k]) flag = false;
            }
            if(flag && ans.empty()) ans = words[i];
            else if(flag && words[i].size() < ans.size()) ans = words[i];
        }
        return ans;
    }
};