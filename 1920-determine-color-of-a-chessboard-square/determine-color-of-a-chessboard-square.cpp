class Solution {
public:
    bool squareIsWhite(string coordinates) {
        return ((coordinates[0] - 'a') + int(coordinates[1])) % 2 == 0;
    }
};