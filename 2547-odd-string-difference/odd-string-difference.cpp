class Solution {
public:
    string oddString(vector<string>& words) {
        int n = words.size();
        vector<vector<int>> u;
        for(int i = 0; i < n; i++){
            vector<int> v;
            for(int j = 1; j < words[i].length(); j++){
                v.push_back( words[i][j] - words[i][j -1] );
            }
            u.push_back(v);  
        }
        for (int i = 0; i < n; i++) {
            if (u[i] != u[(i + 1) % n] && u[i] != u[(i + 2) % n])
                return words[i];
        }
        return "";
    }
};