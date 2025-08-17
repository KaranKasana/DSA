class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        vector<int> freq(50000);
        for(int i = 0; i < nums.size(); i++){
            freq[nums[i]]++;
        }
        int maxF = *max_element(freq.begin(), freq.end());
        if(maxF == 1) return 1;
        vector<int> maxElements;
        for(int i = 0; i < freq.size(); i++){
            if(freq[i] == maxF) maxElements.push_back(i);
        }
        int len = -1;
        for(int i = 0; i < maxElements.size(); i++){
            int first = -1;
            int second = -1;
            for(int j = 0; j < nums.size(); j++){
                if(nums[j] == maxElements[i]){
                    if(first == -1) first = j;
                    else second = j;
                }
            }
            if(len == -1) len = second - first + 1;
            else len = min(len, (second - first + 1));
        }
        return len;
    }
};