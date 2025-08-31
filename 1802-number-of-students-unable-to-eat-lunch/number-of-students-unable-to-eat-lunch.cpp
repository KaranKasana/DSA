class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> line;
        for(int i = 0; i < students.size(); i++){
            line.push(students[i]);
        }
        int rotations = 0;
        while(sandwiches.size() > 0 && line.size() > 0){
            if(line.front() == sandwiches[0]){
                line.pop();
                sandwiches.erase(sandwiches.begin());
                rotations = 0;
            }
            else{
                int top = line.front();
                line.pop();
                line.push(top);
                rotations++;
            }
            if(rotations == line.size()) break;
        }
        return line.size();
    }
};