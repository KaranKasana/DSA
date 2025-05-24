class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        if(numBottles < numExchange) return numBottles;
        int ans = numBottles;
        while(true){
            int emp = numBottles % numExchange;
            int exc = (numBottles - emp) / numExchange;
            ans += exc;
            if(emp + exc < numExchange) break;
            else{
                numBottles = emp + exc;
            }
        }
        return ans;
    }
};