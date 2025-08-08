class Solution {
public:
    int countPoints(string rings) {
        vector<set<char>> rods(10);
        for(int i = 1; i < rings.length(); i = i + 2){
            int rod = rings[i] - '0';
            rods[rod].insert(rings[i-1]);
        }
        int cnt = 0;
        for(int i = 0; i < 10; i++){
            if(rods[i].size() == 3) cnt++;
        }
        return cnt;
    }
};