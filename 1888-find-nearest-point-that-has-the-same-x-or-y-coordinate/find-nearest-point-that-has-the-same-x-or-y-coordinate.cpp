class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int ans = -1;
        int distance = INT_MAX;
        for(int i = 0 ; i < points.size(); i++){
            int x1 = points[i][0], y1 = points[i][1];
            if(x1 == x || y1 == y ){
                if(abs(x - x1) + abs(y - y1) < distance){
                    distance = min(distance, abs(x - x1) + abs(y - y1));
                    ans = i;
                } 
            }
        }
        return ans;
    }
};