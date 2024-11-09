class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int i, j, max=0, count=0;

        for( i = 0; i < sentences.size(); i++ ){
            count = 0;
            for( j = 0; j < sentences[i].length(); j++ ){
                if( sentences[i][j] == ' ' )
                    count++;
            }
            if( count > max )
                max = count;
        }

        return max+1;
    }
};
