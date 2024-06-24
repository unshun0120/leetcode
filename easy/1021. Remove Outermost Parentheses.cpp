class Solution {
public:
    string removeOuterParentheses(string s) {
        string arr="";
        int i, leftcnt=0, rightcnt=0;
        bool start=true;

        for( i = 0; i < s.length(); i++ ){
            if( start == true ){
                start = false;
                leftcnt++;
            }
            else if( s[i] == '(' ){
                leftcnt++;
                arr += '(';
            }
            else if( s[i] == ')' ){
                rightcnt++;
                if( leftcnt != rightcnt )
                    arr += ')';
                else{
                    start = true;
                    leftcnt = rightcnt = 0;
                }
            }
        }

        return arr;
    }
};
