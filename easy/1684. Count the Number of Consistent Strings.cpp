class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int i, j, k, count=0, lens = allowed.length();
        int appear[26]={0};   //紀錄那些英文字母出現過

        for( i = 0; i < allowed.length(); i++ ){
            appear[allowed[i]-97] = 1;
        }
        for( i = 0; i < words.size(); i++ ){
            for( j = 0; j < words[i].size(); j++ ){
                if( appear[ words[i][j]-97 ] == 0 )
                    break;
            }
            if( j == words[i].size() )
                count++;
        }
        



        return count;
    }
};
