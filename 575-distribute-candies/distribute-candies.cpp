class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int eat = n / 2;
        unordered_set<int> candy;
        for(int i = 0; i < n; i++) candy.insert(candyType[i]);
        if(candy.size() <= eat) return candy.size();
        return eat;
    }
};