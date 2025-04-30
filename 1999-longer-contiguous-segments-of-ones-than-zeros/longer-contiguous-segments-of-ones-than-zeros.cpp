class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxcount1 = 0, cnt1 = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') cnt1++;
            else cnt1= 0;
            maxcount1 = max(maxcount1, cnt1);
        }
        int maxcount0 = 0, cnt0 = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0') cnt0++;
            else cnt0 = 0;
            maxcount0 = max(maxcount0, cnt0);
        }
        return (maxcount1 > maxcount0); 
    }
};