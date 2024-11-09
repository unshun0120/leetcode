class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string arr="";
        char temp[s.length()];
        int i;

        for( i = 0; i < indices.size(); i++ ){
            temp[indices[i]] = s[i];
        }

        for( i = 0; i < indices.size(); i++ )
            arr += temp[i];

        return arr;
    }
};
