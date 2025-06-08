class Solution {
public:
    string largestGoodInteger(string num) {
        string s = "";
        for(int i = 0; i <= num.length() - 3; i++){
            if(num[i] == num[i+1] && num[i+1] == num[i+2]){
                string temp = num.substr(i, 3);
                if(temp > s) s = temp;
            }
        }
        return s; 
    }
};