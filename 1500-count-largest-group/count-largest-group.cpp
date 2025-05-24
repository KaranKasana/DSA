class Solution {
public:
    int countLargestGroup(int n) {
        int hasharr[37] = {0};
        for(int i = 1; i <= n; i++){
            int temp = i, sum = 0;
            while(temp){
                int r = temp % 10;
                sum += r;
                temp = temp / 10;
            }
            hasharr[sum]++;
        }
        int largest = hasharr[0], cnt = 0;
        for(int i = 1; i < 37; i++){
            if(hasharr[i] > largest){
                largest = hasharr[i];
                cnt = 1;
            }
            else if(hasharr[i] == largest) cnt++;
        }
        return cnt;
    }
};