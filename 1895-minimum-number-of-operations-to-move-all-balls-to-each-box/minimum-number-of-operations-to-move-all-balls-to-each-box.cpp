class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> pos;
        for(int i = 0; i < n; i++){
            if(boxes[i] == '1') pos.push_back(i);  
        }
        vector<int> res(n);
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = 0; j < pos.size(); j++){
                sum += abs(i - pos[j]);
            }
            res[i] = sum;
        }
        return res;
    }
};