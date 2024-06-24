class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int i, j;

        for( i = 0; i < heights.size(); i++ ){
            for( j = 0; j < i; j++ ){
                if( heights[j] < heights[i] ){
                    swap( heights[i], heights[j] );
                    swap( names[i], names[j] );
                }
            }
        }

        return names;
    }
};
