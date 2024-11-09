class Solution {
public:
    int lengthOfLastWord(string s) {
        int i;
        string ans;
        bool find=false;

        for( i = s.length()-1; i >= 0; i-- ){
            if( s[i] != ' ' ){
                find = true;
                ans += s[i];
            }
            else{
                if( find ) 
                    break;
            }
        }

        return ans.length();
    }
};
