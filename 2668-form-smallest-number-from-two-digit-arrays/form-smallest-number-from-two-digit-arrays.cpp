class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        vector<int> freq(10, 0);
        for(int i = 0; i < nums1.size(); i++) freq[nums1[i]]++;
        for(int i = 0; i < nums2.size(); i++) freq[nums2[i]]++;
        for(int i = 1; i < freq.size(); i++){
            if(freq[i] == 2) return i;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if(nums1[0] > nums2[0]) return nums2[0] * 10 + nums1[0];
        return nums1[0] * 10 + nums2[0];
    }
};