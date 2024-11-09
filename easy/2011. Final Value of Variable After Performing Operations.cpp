class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int i, x=0;

        for( i = 0; i < operations.size(); i++ ){
            if( operations[i] == "--X" || operations[i] == "X--" )
                x--;
            else
                x++;
        }

        return x;
    }
};
