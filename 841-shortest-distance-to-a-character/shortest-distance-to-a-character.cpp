class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> res; 
        int n = s.size();
        for(int i = 0; i < n; i++){
            int minDist = INT_MAX;
            for(int j = 0 ; j < n; j++){
                if(s[j] == c){
                    minDist = min(minDist, abs(j-i));
                }
            }
            res.push_back(minDist);
        }
        return res;
    }
};