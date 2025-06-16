class Solution {
public:
    int convertTime(string current, string correct) {
        int h1 = stoi(current.substr(0,2)), m1 = stoi(current.substr(3,2));
        int h2 = stoi(correct.substr(0,2)), m2 = stoi(correct.substr(3,2));
        int t1 = h1 * 60 + m1, t2 = h2 * 60 + m2;
        int time = t2 - t1;
        int cnt = 0;
        while(time){
            if(time >= 60) time -= 60;
            else if(time >= 15) time -= 15;
            else if(time >= 5) time -= 5;
            else time -= 1;
            cnt++;
        }
        return cnt;
    }
};