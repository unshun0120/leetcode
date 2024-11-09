class Solution {
public:
    vector<int> prefixFunc(string s){
        vector<int> prefix;
        int i, k=0;
        prefix.push_back(0);

        for(i = 1; i < s.length(); i++){
            while(k > 0 && s[k] != s[i]){
                k = prefix[k-1];
            }
            if(s[k] == s[i])
                k++;
            prefix.push_back(k);
            cout << prefix[i] << " ";
        }

        return prefix;
    }

    bool repeatedSubstringPattern(string s) {
        vector<int> prefix;
        prefix = prefixFunc(s);
        int i, lens = s.length();
        for(i = 0; i < lens; i++){
            if(prefix[i] != 0){
                break;
            }
        }
        if(prefix[lens-1] != 0 && lens % (lens - prefix[lens-1]) == 0 )
            return true;

        return false;
    }
};