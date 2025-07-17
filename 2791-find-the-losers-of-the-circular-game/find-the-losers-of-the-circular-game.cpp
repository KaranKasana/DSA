class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {
        vector<int> visited(n+1, 0);
        int pos = 1, step = 1;
        while(!visited[pos]){
            visited[pos] = 1;
            pos = (pos + step * k - 1) % n + 1;
            step++;
        }
        vector<int> ans;
        for(int i = 1; i <= n; i++){
            if(visited[i] == 0) ans.push_back(i);
        }
        return ans;
    }
};