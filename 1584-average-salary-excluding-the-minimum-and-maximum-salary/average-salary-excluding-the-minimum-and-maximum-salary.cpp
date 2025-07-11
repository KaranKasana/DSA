class Solution {
public:
    double average(vector<int>& salary) {
        int maximum = *max_element(salary.begin(), salary.end());
        int minimum = *min_element(salary.begin(), salary.end());
        int sum = accumulate(salary.begin(), salary.end(), 0);
        return (sum - maximum - minimum) / (double)(salary.size() - 2.0);
    }
};