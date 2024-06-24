class Solution {
public:
    string replaceDigits(string s) {
        int i;
        string arr;

        for( i = 0; i < s.length(); i++ ){
            if( s[i] < 97 || s[i] > 122 ){
                arr += (char)(s[i-1]+(int)(s[i]-48));
            }
            else
                arr += s[i];
        }

        return arr;
    }
};
