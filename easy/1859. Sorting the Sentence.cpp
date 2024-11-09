class Solution {
public:
    string sortSentence(string s) {
        string str="";
        int i, j, k, index=1, space=0;

        for( i = 0; i < s.length(); i++ ){
            space = 0;
            for( j = 0; j < s.length(); j++ ){
                if( s[j] == ' ' )   //紀錄距離此單字最近的空白位置
                    space = j;
                else if( s[j] == (char)(index+48) ){    // compare number
                    if( index != 1 )    // 若不是第一個出現的 則前面加上空白
                        str += ' ';
                    index++;    //目前出現的數字
                    if( space == 0 ){   //在句子最前面
                        for( k = space; k < j; k++ )    
                            str += s[k];
                    }
                    else{       //不是在句子的最前面
                        for( k = space+1; k < j; k++ )  //開始輸出space的下個位置(不輸出空白)
                            str += s[k];
                    }
                    break;
                }
            }
        }

        return str;
    }
};
