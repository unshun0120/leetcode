class Solution {
public:
    string sortSentence(string s) {
        string str="";
        int i, j, k, index=1, space=0;

        for( i = 0; i < s.length(); i++ ){
            space = 0;
            for( j = 0; j < s.length(); j++ ){
                if( s[j] == ' ' )   //�����Z������r�̪񪺪ťզ�m
                    space = j;
                else if( s[j] == (char)(index+48) ){    // compare number
                    if( index != 1 )    // �Y���O�Ĥ@�ӥX�{�� �h�e���[�W�ť�
                        str += ' ';
                    index++;    //�ثe�X�{���Ʀr
                    if( space == 0 ){   //�b�y�l�̫e��
                        for( k = space; k < j; k++ )    
                            str += s[k];
                    }
                    else{       //���O�b�y�l���̫e��
                        for( k = space+1; k < j; k++ )  //�}�l��Xspace���U�Ӧ�m(����X�ť�)
                            str += s[k];
                    }
                    break;
                }
            }
        }

        return str;
    }
};
