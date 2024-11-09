class Solution {
public:
    bool isAnagram(string s, string t) {
        int i, j;
        int chs[26]={0}, cht[26]={0};

        for( i = 0; i < s.length(); i++ ){
            chs[ s[i]-97 ]++;
        }

        for( i = 0; i < t.length(); i++ ){
            cht[ t[i]-97 ]++;
        }

        for( i = 0; i < 26; i++ ){
            if( chs[i] != cht[i] )
                return false;
        }

        return true;


    }
};
