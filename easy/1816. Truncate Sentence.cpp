class Solution {
public:
    string truncateSentence(string s, int k) {
        string arr;
        int i, count=0;

        for( i = 0; i < s.length(); i++ ){
            if( count < k ){
                if( s[i] == ' ' && count == k-1 )   //遇到空白&最後一個空白->不輸出
                    count++;
                else if( s[i] == ' ' ){
                    count++;
                    arr += s[i];
                }
                else 
                    arr += s[i];
            }
            else
                break;
        }

        return arr;
    }
};
