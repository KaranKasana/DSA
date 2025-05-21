class Solution {
public:
    string interpret(string command) {
        string ans = "";
        for(int i = 0; i < command.length(); i++){
            if(command[i] == 'G') ans += command[i];
            else if(command[i] == '('){
                if(command[i+1] == ')'){
                    ans += 'o';
                    i++;
                }
                else{
                    ans += "al";
                    i += 2;
                } 
            }
        }
        return ans;
    }
};