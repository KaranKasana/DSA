class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mpp;
        char ch = 'a';
        for(int i = 0; i < key.length(); i++){
            if(key[i] != ' ' && mpp.find(key[i]) == mpp.end()){
                mpp[key[i]] = ch;
                ch++;
            }
        }
        for(int i = 0; i < message.length(); i++){
            if(message[i] != ' '){
                message[i] = mpp[message[i]];
            }  
        }
        return message;
    }
};