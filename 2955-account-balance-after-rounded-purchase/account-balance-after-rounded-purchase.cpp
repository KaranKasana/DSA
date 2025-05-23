class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int r = purchaseAmount % 10;
        if(r == 0) return 100 - purchaseAmount;
        if(r < 5) return 100 - purchaseAmount + r;
        return 100 - purchaseAmount - (10- r);
    }
};