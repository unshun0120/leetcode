class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> stk;
        int i, j;
        long long num1, num2;

        for(i = 0; i < tokens.size(); i++){
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/"){
                stk.push( stoll(tokens[i]) );
            }
            else if(tokens[i] == "+"){
                num1 = stk.top();   stk.pop();
                num2 = stk.top();   stk.pop();
                stk.push(num2 + num1);
            }
            else if(tokens[i] == "-"){
                num1 = stk.top();   stk.pop();
                num2 = stk.top();   stk.pop();
                stk.push(num2 - num1);
            }
            else if(tokens[i] == "*"){
                num1 = stk.top();   stk.pop();
                num2 = stk.top();   stk.pop();
                stk.push(num2 * num1);
            }
            else if(tokens[i] == "/"){
                num1 = stk.top();   stk.pop();
                num2 = stk.top();   stk.pop();
                stk.push(num2 / num1);
            }
        }
        
        return stk.top();
    }
};