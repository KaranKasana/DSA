class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10, 0);
        for(int i = 0; i < digits.size(); i++) freq[digits[i]]++;
        int n = freq.size();
        unordered_set<int> uniqueDigits;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(i == 0 || k % 2 != 0) continue;
                     unordered_map<int, int> candidateFreq;
                    candidateFreq[i]++;
                    candidateFreq[j]++;
                    candidateFreq[k]++;
                    bool valid = true;
                    for (auto& [digit, cnt] : candidateFreq) {
                        if (cnt > freq[digit]) {
                            valid = false;
                            break;
                        }
                    }
                    if (valid) {
                        int num = i * 100 + j * 10 + k;
                        uniqueDigits.insert(num);
                    }
                }
            }
        }
        return uniqueDigits.size();
    }
};