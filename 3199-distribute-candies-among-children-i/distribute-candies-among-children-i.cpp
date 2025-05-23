class Solution {
public:
    int distributeCandies(int n, int limit) {
        int cnt = 0;
        for (int x = 0; x <= limit; x++) {
            for (int y = 0; y <= limit; y++) {
                int z = n - x - y;
                if (0 <= z && z <= limit) {
                    cnt++;
                }
            }
        }
        return cnt;
    }    
};