class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        int area =  abs(points[0][0] * (points[1][1] - points[2][1]) 
                    +points[1][0] * (points[2][1] - points[0][1])
                    +points[2][0] * (points[0][1] - points[1][1]));
        return area != 0;            
    }
};