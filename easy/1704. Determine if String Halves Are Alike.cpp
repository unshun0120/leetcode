class Solution {
public:
    bool halvesAreAlike(string s) {
        int i, count1=0, count2=0;  //count1->�O��e�b�������X�{���� count2->��b��

        for( i = 0; i < s.length(); i++ ){
            if( i < s.length()/2 ){     //�e�b��
                if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                        count1++;
            }
            else{   // ��b��
                if( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
                    s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' )
                        count2++;
            }
        }

        if( count1 == count2 )
            return true;
        else
            return false;

    }
};
