class Solution {
public:
    string reverseWords(string s) {
        string temp="", ans="";
        for(int i = s.length()-1; i >= 0; i--){
            if(s[i] == ' ' && temp != ""){
                reverse(temp.begin(), temp.end());
                ans += temp + " ";
                temp = "";
            }
            else if(s[i] != ' '){
                temp += s[i];
            }
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        // remove last charactor if exist a space
        if(ans[ans.length()-1] == ' ')
            ans.pop_back();

        return ans;
    }
};