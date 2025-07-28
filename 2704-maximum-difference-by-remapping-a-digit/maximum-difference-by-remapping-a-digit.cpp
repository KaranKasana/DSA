class Solution {
public:
    int minMaxDifference(int num) {
        string number = to_string(num);
        string maximum = "", minimum = "";
        char first, second;
        for(int i = 0; i < number.length(); i++){
            if(number[i] != '9'){
                first = number[i];
                break;
            } 
        }
         for(int i = 0; i < number.length(); i++){
            if(number[i] != '0'){
                second = number[i];
                break;
            } 
        }
        for(int i = 0; i < number.length(); i++){
            if(number[i] == first) maximum += '9';
            else maximum += number[i];
            if(number[i] == second) minimum += '0';
            else minimum += number[i];
        }
        return stoi(maximum) - stoi(minimum);
    }
};