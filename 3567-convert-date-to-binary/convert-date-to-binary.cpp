class Solution {
public:
    string convertDateToBinary(string date) {
        string ans = "";
        int i = 0, start = 0;
        while(i <= date.length()){
            if(date[i] == '-' || i == date.length()){
                int num = stoi(date.substr(start, i - start));
                string str = "";
                while(num){
                    int r = num % 2;
                    str = to_string(r) + str;
                    num = num / 2; 
                }
                ans = ans + str + '-';
                start = i + 1;
            }
            i++;
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};