class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber--){
            int r = columnNumber % 26;
            ans.insert(ans.begin(), 'A' + r);
            columnNumber /= 26;
        }
        return ans;
    }
};