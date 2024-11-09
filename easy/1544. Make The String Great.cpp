class Solution {
public:
    string makeGood(string s) {
        bool change=true;
        int i, temp;

        while( change ){
            change = false;
            if( s == "" )
                break;
            for( i = 0; i < s.length()-1; i++ ){
                temp = i;
                if( int(s[i]) == int(s[i+1])+32 || int(s[i]) == int(s[i+1])-32 ){
                    s.erase(i, 2);
                    change = true;
                    break;
                }
            }
        }

        return s;
    }
};
