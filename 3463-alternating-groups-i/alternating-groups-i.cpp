class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int cnt = 0;
        int n = colors.size();
        if( (colors[n-1] == 0 && colors[0] == 1 && colors[1] == 0) ||
            (colors[n-1] == 1 && colors[0] == 0 && colors[1] == 1) ) cnt++;
        for(int i = 1; i < n - 1; i++){
            if( (colors[i-1] == 0 && colors[i] == 1 && colors[i+1] == 0) ||
                (colors[i-1] == 1 && colors[i] == 0 && colors[i+1] == 1) ) cnt++;
        }   
        if( (colors[n-2] == 0 && colors[n-1] == 1 && colors[0] == 0) ||
            (colors[n-2] == 1 && colors[n-1] == 0 && colors[0] == 1) ) cnt++; 
        return cnt;    
    }
};