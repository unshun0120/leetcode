class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> res;
        vector<int> origin = score;

        sort( score.begin(), score.end(), greater<int>() );
        for( int i = 0; i < score.size(); i++ ){
            for( int j = 0; j < score.size(); j++ ){
                if( origin[i] == score[j] ){
                    origin[i] = j+1;
                    break;
                }
            }
        }

        for( int i = 0; i < origin.size(); i++ ){
            if( origin[i] == 1 )
                res.push_back( "Gold Medal" );
            else if( origin[i] == 2 )
                res.push_back( "Silver Medal" );
            else if( origin[i] == 3 )
                res.push_back( "Bronze Medal" );
            else
                res.push_back( to_string( origin[i] ) );
        }

        return res;
    }
};
