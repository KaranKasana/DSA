class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination){
        if(start == destination) return 0;
        int pos1 = min(start, destination);
        int pos2 = max(start, destination);
        int dist1 = accumulate(distance.begin() + pos1,distance.begin() + pos2, 0);
        int dist2 = accumulate(distance.begin(), distance.end(), 0) - dist1;
        return min(dist1, dist2);
    }
};