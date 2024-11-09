class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int i, j, index=0, count=0;

        for( i = 0; i < words.size(); i++ ){
            index = 0;
            j = 0;
            while( words[i][j] == pref[index] && j < words[i].length()){
                j++;
                index++;
            }
            if( index == pref.length() )
                count++;
        }

        return count;
    }
};
