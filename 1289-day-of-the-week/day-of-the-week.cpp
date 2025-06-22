class Solution {
public:
    string dayOfTheWeek(int d, int m, int y) {
        string arr[7] = {"Saturday","Sunday", "Monday", 
        "Tuesday", "Wednesday", "Thursday", "Friday" };
        if (m == 1 || m == 2) {
            m += 12;
            y -= 1;
        }
        int h = (d + 13*(m + 1)/5 + y + y/4 - y/100 + y/400) % 7;
        return arr[h];
    }
};