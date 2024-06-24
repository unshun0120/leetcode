class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i;
        vector<int> stack;

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '(' )
                stack.push_back(i);
            else if( s[i] == ')' ){
                if( !stack.empty() )
                    stack.pop_back();
                else
                    s[i] = '*';
            }
        }

        if( !stack.empty() ){
            for( i = 0; i < stack.size(); i++ ){
                s[stack[i]] = '*';
            }
        }

        s.erase( remove(s.begin(), s.end(), '*'), s.end());

        return s;
    }
};
