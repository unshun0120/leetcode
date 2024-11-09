class Solution {
public:
    int maxDepth(string s) {
        int lens = s.length(), i, max=0, top=0;
        char stack[lens];

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '(' ){      //遇到左括號則記錄到stack上
                stack[top] = '(';
                top++;
            }
            else if( s[i] == ')' ){     //遇到右括號則看目前的depth是否最大並從stack上去掉此括號 之後不考慮這組括號近來
                if( top > max )
                    max = top;
                top--;
            }
        }

        return max;
    }
};
