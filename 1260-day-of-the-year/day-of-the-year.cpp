class Solution {
public:
    int dayOfYear(string date) {
        vector<int> monthDays = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int year = stoi(date.substr(0, 4));
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            monthDays[1] = 29;
        }
        int month = stoi(date.substr(5, 2));
        if(month == 1) return stoi(date.substr(8, 2));
        int days = 0;
        for(int i = 0; i < month - 1; i++) days += monthDays[i];
        return days + stoi(date.substr(8, 2));
    }
};