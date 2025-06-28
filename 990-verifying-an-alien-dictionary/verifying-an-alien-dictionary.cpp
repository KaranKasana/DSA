class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int arr[26];
        for(int i = 0; i < order.length(); i++){
            arr[order[i] - 'a'] = i; 
        }
        for(int i = 0; i < words.size() - 1; i++){
            string s1 = words[i];
            string s2 = words[i + 1];
            int m = 0;
            while(m < s1.length() && m < s2.length()){
                if(arr[s1[m] - 'a'] < arr[s2[m] - 'a']) break;
                else if(arr[s1[m] - 'a'] > arr[s2[m] - 'a']) return false;
                m++;
            }
            if(m == s2.length() && s1.length() > s2.length()) return false;
        }
        return true;
    }
};