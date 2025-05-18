class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int i = n*n, cnt = 0;
        while(i && (w <= maxWeight)){
            cnt++;
            maxWeight -= w;
            i--;
        }
        return cnt;
    }
};