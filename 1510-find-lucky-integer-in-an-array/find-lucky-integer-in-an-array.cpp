class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> freq(501,0);
        for(int i = 0; i < arr.size(); i++){
            freq[arr[i]]++;
        }
        int maxNum = -1, num = -1;
        for(int i = 1; i < freq.size(); i++){
            if(freq[i] == i){
                num = i;
            } 
            maxNum = max(maxNum, num); 
        }
        return maxNum;
    }
};