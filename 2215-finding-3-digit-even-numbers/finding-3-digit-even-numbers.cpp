class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int, int> d;
        for(int i = 0; i < digits.size(); i++){
            d[digits[i]]++;
        } 
        vector<int> res;
        for(int i = 100; i < 999; i = i + 2){
            unordered_map<int, int> digit;
            int temp = i;
            while(temp){
                digit[temp % 10]++;
                temp = temp / 10;
            }
            bool flag = true;
            for(auto it : digit){
                if(d[it.first] < it.second){
                    flag = false;
                    break;
                }
            }
            if(flag) res.push_back(i);
        }
        return res;
    }
};