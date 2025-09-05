class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n % 2 != 0){
            ans.append(n,'a');
        }
        else{
            ans.append(n - 1, 'a');
            ans += 'b';
        } 
        return ans;
    }
};