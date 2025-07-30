class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        int len = password.length();
        if(len < 8) return false;
        bool lower = false, upper = false, digit = false, special = false;
        string specialChar = "!@#$%^&*()-+";
        for(int i = 0; i < password.length(); i++){
            if (i > 0 && password[i] == password[i - 1]) return false;
            if(islower(password[i])) lower = true;
            else if(isupper(password[i])) upper = true;
            else if(isdigit(password[i])) digit = true;
            else if(specialChar.find(password[i]) != string::npos) special = true;
        }
        return lower && upper && digit && special;
    }
};