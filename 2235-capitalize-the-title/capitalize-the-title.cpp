class Solution {
public:
    string capitalizeTitle(string title) {
        int n = title.length();
        int i = 0, j = 0;
        while(j < n){
            while(j < n && title[j] != ' '){
                title[j] = tolower(title[j]);
                j++;
            } 
            if(j - i  > 2){
                title[i] = toupper(title[i]);
            }
            i = j + 1;
            j++;
        }
        return title;
    }
};