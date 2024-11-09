class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i, j, lens;
        
        for( i = 0; i < words.size(); i++ ){
            lens = words[i].size();
            if( lens % 2 != 0 ){    //odd
                for( j = 0; j < lens-1; j++ ){
                    if( words[i][j] != words[i][lens-j-1] )
                        break;
                }
                if( j == lens-1 )
                    return words[i];
            }   
            else{      //even
                for( j = 0; j < lens; j++ ){
                    if( words[i][j] != words[i][lens-j-1] )
                        break;
                }
                if( j == lens )
                    return words[i];
            }   
        }

        return "";
    }
};
