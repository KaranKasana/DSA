class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int val = n / 4;
        for(int i = 0; i < n - val; i++){
            if(arr[i] == arr[i + val]){
                return arr[i];
            }
        }
        return -1;
    }
};