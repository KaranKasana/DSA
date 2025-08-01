class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        unordered_map<string, int> order = {{"electronics", 0}, {"grocery", 1}, {"pharmacy", 2}, {"restaurant", 3}};
        vector<pair<int, string>> valid;

        for (int i = 0; i < code.size(); ++i) {
            if (!code[i].empty() && all_of(code[i].begin(), code[i].end(), [](char c){ return isalnum(c) || c == '_'; })
                && order.count(businessLine[i]) && isActive[i]) {
                valid.emplace_back(order[businessLine[i]], code[i]);
            }
        }

        sort(valid.begin(), valid.end());
        vector<string> res;
        for (auto& [_, c] : valid) res.push_back(c);
        return res;
    }
};
