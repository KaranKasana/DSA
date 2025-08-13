class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string dcity = paths[0][1];
        while(true){
            int i = 1;
            while(i < paths.size()){
                if(paths[i][0] == dcity){
                    dcity = paths[i][1];
                    break;
                }
                else i++;
            }
            if(i == paths.size()) break; 
        }
        return dcity;
    }
};