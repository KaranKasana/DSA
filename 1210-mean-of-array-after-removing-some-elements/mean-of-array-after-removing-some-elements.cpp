class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = (arr.size() * 5) / 100;
        arr.erase(arr.begin(), arr.begin() + n);
        arr.erase(arr.begin() + arr.size() - n, arr.end());
        double sum = accumulate(arr.begin(), arr.end(), 0); 
        return sum / arr.size();
    }
};