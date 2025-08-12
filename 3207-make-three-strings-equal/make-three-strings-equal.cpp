class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int x = s1.length();
        int y = s2.length();
        int z = s3.length();
        int i = 0;
        while(i < x && i < y && i < z){
            if(s1[i] == s2[i] && s2[i] == s3[i]) i++;
            else break;
        }
        if(i == 0) return -1;
        return (x - i) + (y - i) + (z - i);
    }
};