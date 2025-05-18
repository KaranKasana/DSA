class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int contNeed = maxWeight / w;
        if(n*n <= contNeed) return n*n;
        return contNeed;
    }
};