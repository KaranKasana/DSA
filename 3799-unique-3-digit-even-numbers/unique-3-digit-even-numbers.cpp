class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for (int d : digits) freq[d]++;
        unordered_set<int> result;
        for (int i = 100; i <= 998; i += 2) {
            int a = i / 100;
            int b = (i / 10) % 10;
            int c = i % 10;
            vector<int> tempFreq(10, 0);
            tempFreq[a]++;
            tempFreq[b]++;
            tempFreq[c]++;
            bool valid = true;
            for (int d = 0; d < 10; d++) {
                if (tempFreq[d] > freq[d]) {
                    valid = false;
                    break;
                }
            }
            if (valid) result.insert(i);
        }
        return result.size();
    }
};
