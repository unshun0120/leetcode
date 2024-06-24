class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0, i, r, l;

        r = l = 0;
        for( i = 0; i < s.length(); i++ ){
            if( s[i] == 'R' )   r++;
            if( s[i] == 'L' )   l++;
            if( r == l ){
                count++;
                r = l = 0;
            }

        }


        return count;
    }
};  
