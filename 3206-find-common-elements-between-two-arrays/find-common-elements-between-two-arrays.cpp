class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int hasharr1[101] = {0};
        for(int i = 0; i < nums1.size(); i++){
            if(!hasharr1[nums1[i]]) hasharr1[nums1[i]]++;
        }
        int cnt1 = 0; 
        for(int i = 0 ; i < nums2.size(); i++){
            if(hasharr1[nums2[i]]) cnt1++; 
        }
        int hasharr2[101] = {0};
        for(int i = 0; i < nums2.size(); i++){
            if(!hasharr2[nums2[i]]) hasharr2[nums2[i]]++;
        }
        int cnt2 = 0; 
        for(int i = 0 ; i < nums1.size(); i++){
            if(hasharr2[nums1[i]]) cnt2++; 
        }
        return {cnt2, cnt1};
    }
};