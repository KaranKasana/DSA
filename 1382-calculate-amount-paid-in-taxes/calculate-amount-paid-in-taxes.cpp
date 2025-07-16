class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        double tax = 0;
        if(income == 0) return tax;
        if(income <= brackets[0][0]){
            tax += income * (brackets[0][1] / 100.0);
            return tax;
        }
        else{
            tax += brackets[0][0] * (brackets[0][1] / 100.0);
            income = income - brackets[0][0];
        }
        int i = 1;
        while(income){
            if(income <= (brackets[i][0] - brackets[i-1][0])){
                tax += income * (brackets[i][1] / 100.0);
                break;
            }
            else{
                tax += (brackets[i][0] - brackets[i-1][0])*(brackets[i][1]/100.0);
                income = income - (brackets[i][0] - brackets[i-1][0]);
                i++;
            }
        }
        return tax;
    }
};