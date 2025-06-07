// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int ans = -1;
        int l = 0, r = arr.size() - 1;
        while(l <= r){
            int mid = l + (r - l) / 2;
            if(arr[mid] >= x){
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
};