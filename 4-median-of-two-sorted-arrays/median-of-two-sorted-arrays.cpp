class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //code sync
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nums3(n+m);
        merge(nums1.begin() , nums1.end(), nums2.begin(), nums2.end(), nums3.begin());
        sort(nums3.begin(), nums3.end());
        if((n+m) % 2 == 1) return nums3[(n+m)/2];
        else return (double)( nums3[(n+m) / 2] + nums3[(n+m-1) / 2] )/2;
    }
};