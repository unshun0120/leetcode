class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",
                         ".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",
                         ".--","-..-","-.--","--.."};
        string code[words.size()];
        int i, j, max=0;
        int dif[words.size()];

        if( words.size() == 1 ) return 1;   //若只有1個

        for( i = 0; i < words.size(); i++ ){    //decode所有words
            code[i] = "";   
            dif[i] = 0;
            for( j = 0; j < words[i].size(); j++ ){ 
                code[i] += morse[ words[i][j]-97 ];
            }
        }

        int index=1;    //目前幾個不同
        bool same = false;  //沒有找到相同的
        for( i = 0; i < words.size(); i++ ){
            same = false;
            for( j = i+1; j < words.size(); j++ ){
                if( code[i] == code[j] ){
                    same = true;
                    if( dif[i] == 0 && dif[j] == 0 ){  //dif[i] and dif[j] 皆沒有配對到過
                        dif[i] = index;
                        dif[j] = index;
                        index++;
                    }
                    else if( dif[i] != 0 && dif[j] == 0 ){  //dif[i]配對過 dif[j]未配對
                        dif[j] = dif[i];
                    }
                }
            }
            if( same == false && dif[i] == 0 ){     //沒有找到相同的 and 沒有配對過
                dif[i] = index;
                index++;
            }
        }

        for( i = 0; i < words.size(); i++ ){    //找出最大值->有幾個不同
            if( dif[i] > max )
                max = dif[i];
        }

        /*for( i = 0; i < words.size(); i++ ){
            cout << code[i] << endl;
        }*/

        return max;
    }
};
