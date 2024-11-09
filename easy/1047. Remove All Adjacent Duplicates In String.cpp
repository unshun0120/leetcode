class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> stk;
        string res;
        int i, top=-1;

        for(i = 0; i < s.length(); i++ ){
            if(top == -1){
                stk.push(s[i]);
                top++;
            }
            else if(s[i] == stk.top()){
                stk.pop();
                top--;
            }
            else{
                stk.push(s[i]);
                top++;
            }
        }

        while(!stk.empty()){
            res += stk.top();
            stk.pop();
        }
        reverse(res.begin(), res.end());
        
        return res;
    }
};