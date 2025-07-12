class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans(A.size());
        int arr[51] = {0};
        for(int i = 0; i < A.size(); i++){
            arr[A[i]]++;
            arr[B[i]]++;
            int freq = 0;
            for(int j = 1; j <= 50; j++){
                if(arr[j] >= 2) freq++;
            }
            ans[i] = freq;
        }
        return ans;
    }
};