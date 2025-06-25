class Solution {
public:
    vector<int> findCoins(vector<int>& numWays) {
        int n = numWays.size();
        if (n == 0) return {};

        vector<int> coins;
        vector<int> dp(n + 1, 0);
        dp[0] = 1;

        for (int amount = 1; amount <= n; ++amount) {
            int required = numWays[amount - 1];
            if (dp[amount] < required) {
                int needed = required - dp[amount];
                if (needed < 0) return {};
                coins.push_back(amount);
                for (int a = amount; a <= n; ++a) {
                    dp[a] += dp[a - amount];
                }
            }
        }

        for (int i = 1; i <= n; ++i) {
            if (dp[i] != numWays[i - 1]) {
                return {};
            }
        }

        sort(coins.begin(), coins.end());
        return coins;
    }
};