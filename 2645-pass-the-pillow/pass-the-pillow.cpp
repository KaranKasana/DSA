class Solution {
public:
    int passThePillow(int n, int time) {
        time = time % ((n*2)-2);
        if(time < n) return time + 1;
        for(int i = 1; i < n; i++){
            if((n*2)-(i+1) == time){
                return i;
            }
        }
        return -1;
    }
};