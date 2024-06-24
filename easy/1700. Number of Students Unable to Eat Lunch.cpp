class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int iterate=0;

        while( iterate <= students.size() && students.size() != 0){
            if( sandwiches[0] == students[0] ){
                students.erase( students.begin() );
                sandwiches.erase( sandwiches.begin() );
                iterate=0;
            }
            else{
                students.push_back( students[0] );
                students.erase( students.begin() );
                iterate++;
            }
        }

        return sandwiches.size();
    }
};
