class Solution {
public:
    int maxDepth(string s) {
        int lens = s.length(), i, max=0, top=0;
        char stack[lens];

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '(' ){      //�J�쥪�A���h�O����stack�W
                stack[top] = '(';
                top++;
            }
            else if( s[i] == ')' ){     //�J��k�A���h�ݥثe��depth�O�_�̤j�ñqstack�W�h�����A�� ���ᤣ�Ҽ{�o�լA�����
                if( top > max )
                    max = top;
                top--;
            }
        }

        return max;
    }
};
