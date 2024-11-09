class Solution {
public:
    string freqAlphabets(string s) {
        int i, j, num;
        string temp="", ans="";

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '#' ){
                for( j = 0; j < temp.length()-2; j++ ){
                    ans += temp[j]+48;
                }
                num = (int)(temp[j]-48)*10 + (int)(temp[j+1]-48);
                ans += (char)(num+96);
                temp = "";
            }
            else{
                temp += s[i];
            }
        }
        for( j = 0; j < temp.length(); j++ ){
            ans += temp[j]+48;
        }a

        return ans;
    }
};
