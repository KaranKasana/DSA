// User function Template for C++
class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        int ans = arr.size();
        int l = 0, r = ans - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] > target){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }   
};
