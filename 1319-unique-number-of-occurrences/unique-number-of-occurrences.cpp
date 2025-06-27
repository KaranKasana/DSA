class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int a[2001] = {0};
        for(int i = 0; i < arr.size(); i++){
            a[arr[i] + 1000]++;
        }
        unordered_set<int> st;
        for(int i = 0; i < 2001; i++){
            if(a[i] != 0){
                if(st.count(a[i])) return false;
                else st.insert(a[i]);
            }
        }
        return true;
    }
};