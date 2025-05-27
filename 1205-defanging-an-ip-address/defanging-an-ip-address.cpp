class Solution {
public:
    string defangIPaddr(string address) {
        string ans = "";
        for(int i = 0 ; i < address.size(); i++){
            if(isdigit(address[i])){
                ans += address[i];
            }
            else{
                ans += "[.]";
            }
        }
        return ans;
    }
};