class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minDiff = INT_MAX;
        for(int i = 0; i < arr.size()-1; i++){
            minDiff = min(minDiff, abs(arr[i] - arr[i+1]));
        }
        vector<vector<int>> ans;
        for(int i = 0; i < arr.size()-1; i++){
            vector<int> pair;
            if(abs(arr[i] - arr[i+1]) == minDiff){
                pair.push_back(arr[i]);
                pair.push_back(arr[i+1]);
            }
            if(!pair.empty()) ans.push_back(pair);
        }
        return ans;
    }
};