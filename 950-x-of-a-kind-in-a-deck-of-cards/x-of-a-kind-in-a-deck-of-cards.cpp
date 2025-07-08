class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mpp;
        for(int i = 0; i < deck.size(); i++){
            mpp[deck[i]]++;
        }
        int res = 0;
        for(auto it: mpp){
            res = __gcd(it.second, res);
        }
        return res > 1;
    }
};