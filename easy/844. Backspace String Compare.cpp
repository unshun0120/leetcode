class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int top = -1, i;
        char s1[200], t1[200];
        string s2, t2;

        for( i = 0; i < s.length(); i++ ){
            if( s[i] >= 65 && s[i] <= 91 || s[i] >= 97 && s[i] <= 122 ){
                top++;
                s1[ top ] = s[i];
            }
            else{   //#
                if( top != -1 )
                    top--;
            }
        }
        for( i = 0; i <= top; i++ ){
            s2 += s1[i];
        }

        top = -1;
        for( i = 0; i < t.length(); i++ ){
            if( t[i] >= 65 && t[i] <= 91 || t[i] >= 97 && t[i] <= 122 ){
                top++;
                t1[ top ] = t[i];
            }
            else{   //#
                if( top != -1 )
                    top--;
            }
        }
        for( i = 0; i <= top; i++ ){
            t2 += t1[i];
        }

        cout << s2 << " " << t2;

        if( s2.length() != t2.length() )
            return false;
        else{
            for( i = 0; i < s2.length(); i++ ){
                if( s2[i] != t2[i] )
                    break;
            }
            if( i == s2.length() )
                return true;
            else
                return false;
        }

    }
};
