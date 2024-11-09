class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
                         ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
                         ".--","-..-","-.--","--.."};
        string code[words.size()];
        int i, j, max=0;
        int dif[words.size()];

        if( words.size() == 1 ) return 1;   //�Y�u��1��

        for( i = 0; i < words.size(); i++ ){    //decode�Ҧ�words
            code[i] = "";   
            dif[i] = 0;
            for( j = 0; j < words[i].size(); j++ ){ 
                code[i] += morse[ words[i][j]-97 ];
            }
        }

        int index=1;    //�ثe�X�Ӥ��P
        bool same = false;  //�S�����ۦP��
        for( i = 0; i < words.size(); i++ ){
            same = false;
            for( j = i+1; j < words.size(); j++ ){
                if( code[i] == code[j] ){
                    same = true;
                    if( dif[i] == 0 && dif[j] == 0 ){  //dif[i] and dif[j] �ҨS���t���L
                        dif[i] = index;
                        dif[j] = index;
                        index++;
                    }
                    else if( dif[i] != 0 && dif[j] == 0 ){  //dif[i]�t��L dif[j]���t��
                        dif[j] = dif[i];
                    }
                }
            }
            if( same == false && dif[i] == 0 ){     //�S�����ۦP�� and �S���t��L
                dif[i] = index;
                index++;
            }
        }

        for( i = 0; i < words.size(); i++ ){    //��X�̤j��->���X�Ӥ��P
            if( dif[i] > max )
                max = dif[i];
        }

        /*for( i = 0; i < words.size(); i++ ){
            cout << code[i] << endl;
        }*/

        return max;
    }
};
