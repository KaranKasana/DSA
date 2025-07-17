class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> people(n + 1, 0);
        for(int i = 0; i < trust.size(); i++){
            people[trust[i][0]] = 1;
        }
        int pot = -1;
        for(int i = 1; i < people.size(); i++){
            if(people[i] == 0) pot = i;
        }
        if(pot == -1) return pot;
        unordered_set<int> st;
        for(int i = 0; i < trust.size(); i++){
            if(trust[i][1] == pot) st.insert(trust[i][0]);
        }
        if(st.size() == n - 1) return pot;
        return -1;
    }
};