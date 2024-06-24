class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i, j;
        string arr;

        for( i = 0; i < word.length(); i++ ){
            if( ch == word[i] )
                break;
        }

        if( i == word.length() )
            return word;
        else{
            for( j = i; j >= 0; j-- ){
                arr += word[j];
            }
            for( j = i+1; j < word.length(); j++ )
                arr += word[j];

            return arr;
        }
    }
};
