class Solution {
public:
    int fillCups(vector<int>& amount) {
        int cnt = 0;
        while((amount[0] > 0 && amount[1] > 0) 
            ||(amount[1] > 0 && amount[2] > 0)
            ||(amount[0] > 0 && amount[2] > 0)){
            if(amount[0] >= amount[1] && amount[0] >= amount[2]){
                amount[0]--;
                if(amount[1] >= amount[2]){
                    amount[1]--;
                    cnt++; 
                }
                else if(amount[2] > amount[1]){
                    amount[2]--;
                    cnt++;
                }
            }
            else if(amount[1] >= amount[0] && amount[1] >= amount[2]){
                amount[1]--;
                if(amount[0] >= amount[2]){
                    amount[0]--;
                    cnt++; 
                }
                else if(amount[2] > amount[0]){
                    amount[2]--;
                    cnt++;
                }
            }
            else if(amount[2] >= amount[0] && amount[2] >= amount[1]){
                amount[2]--;
                if(amount[0] >= amount[1]){
                    amount[0]--;
                    cnt++; 
                }
                else if(amount[1] >= amount[0]){
                    amount[1]--;
                    cnt++;
                }
            }
        } 
        for(int i = 0; i < 3; i++){
            if(amount[i] > 0) cnt += amount[i];
        }
        return cnt;   
    }
};