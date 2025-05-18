class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        if(n*n <= maxWeight / w) return n*n;
        return maxWeight / w;
    }
};