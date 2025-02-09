class Solution {
public:
    bool isSubsequence(string s, string t) {
        int curr=0;

        for(int i = 0; i < t.length(); i++){
            if(s[curr] == t[i])
                curr++;
        }

        if(curr == s.length())
            return true;
        else
            return false;
    }
};