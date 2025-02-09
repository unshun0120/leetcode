class Solution {
public:
    int compress(vector<char>& chars) {
        int i, count=1;
        string s="";

        if(chars.size() == 1)
            return 1;

        // 將字母和出現次數存起來
        for(i = 1; i < chars.size(); i++){
            if(chars[i] == chars[i-1])
                count++;
            else if(chars[i] != chars[i-1]){
                if(count == 1)
                    s += chars[i-1];
                else
                    s += chars[i-1] + to_string(count);
                count = 1;
            }
        }    
        if(count == 1)
            s += chars[i-1];
        else
            s += chars[i-1] + to_string(count);

        // 清空chars並重新寫進去
        chars.clear();
        for(i = 0; i < s.length(); i++){
            chars.push_back(s[i]);
        }

        return s.length();
    }
};