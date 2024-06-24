class Solution {
public:
    bool checkValidString(string s) {
        int i, star_cnt=0;
        vector<int> stack, star_stack;

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '(' )
                stack.push_back(i);
            else if( s[i] == ')' ){
                if( !stack.empty() ){
                    s[i] = '0';
                    s[ stack.back() ] = '0';
                    stack.pop_back();
                }
                else{
                    if( star_stack.empty() ){
                        cout << "1 " << i << endl;
                        return false;
                    }
                    else{
                        s[ star_stack.back() ] = '0';
                        star_stack.pop_back();
                    }
                }
            }
            else if( s[i] == '*' ){
                star_stack.push_back(i);
            }
        }

        if( !stack.empty() ){
            stack.clear();
            for( i = 0; i < s.length(); i++ ){
                if( s[i] != '0' ){
                    if( s[i] == '(' )
                        stack.push_back(i);
                    else if( s[i] == '*' ){
                        if( !stack.empty() ){
                            stack.pop_back();
                        }
                    }
                }
            }
        }

        if( !stack.empty() )
            return false;
        else
            return true;

    }
};
