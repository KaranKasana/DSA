class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int cnt = 0;
        for(int i = 0; i < fruits.size(); i++){
            bool flag = false;
            for(int j = 0; j < baskets.size(); j++){
                if(fruits[i] <= baskets[j]){
                    flag = true;
                    baskets[j] = -1;
                    break;
                }
            }
            if(!flag) cnt++;
        }
        return cnt;
    }
};