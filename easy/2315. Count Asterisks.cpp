class Solution {
public:
    int countAsterisks(string s) {
        int i, allStar=0, pairStar=0;

        for( i = 0; i < s.length(); i++ ){
            if( s[i] == '*' )   //�p��Ҧ�star��-�bpair�̪�star��=���bpair�̪�star��
                allStar++;
            if( s[i] == '|' ){
                i++;
                while( s[i] != '|' ){
                    if( s[i] == '*' ){
                        pairStar++;
                        allStar++;
                    }
                    i++;
                }
            }
        }

        return allStar-pairStar;
    }

