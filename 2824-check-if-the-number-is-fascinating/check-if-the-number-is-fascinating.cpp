class Solution {
public:
    bool isFascinating(int n) {
        string n1 = to_string(n);
        string n2 = to_string(2 * n);
        string n3 = to_string(3 * n);
        if(n2.size() != 3 && n3.size() != 3) return false;
        string num = n1 + n2 + n3;
        vector<int> v(10, 0);
        for(int i = 0; i < num.length(); i++){
            if(!v[num[i] - '0']) v[num[i] - '0']++;
        }
        if(v[0] > 0) return false;
        int cnt = 0;
        for(int i = 1; i < v.size(); i++){
            if(v[i]) cnt++;
        }
        return cnt == 9;
    }
};