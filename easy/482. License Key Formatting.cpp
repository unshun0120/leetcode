class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        int i, count=0, curr=0;
        string ans="";

        for( i = 0; i < s.length(); i++ ){
            if( s[i] >= 97 && s[i] <= 122 )
                s[i] = s[i] - 32;
            if( s[i] != '-' )
                count++;    //�p��@���X�ӼƦr�Φr��
        }  

        if( count % k == 0 ){    //��㰣 �h�̾�k��������
            cout << "1";
            curr = 0;
            for( i = 0; i < s.length(); i++ ){
                if( curr < k && s[i] != '-' ){
                    ans += s[i];
                    curr++;
                }
                else if( curr == k && s[i] !='-' ){
                    ans += '-';
                    curr = 0;
                    if( s[i] != '-' )
                        i--;
                }
            }
        }
        else{   //����㰣 -> �Ĥ@�Ӧ�m��l�ƭӦr�� ��l�̾�k��������
            cout << "2";
            int c = 0, begin;
            for( i = 0; i < s.length(); i++ ){
                if( s[i] != '-' ){
                   ans += s[i];
                   c++;               
                } 
                if( c == ( count%k ) ){
                    begin = i;
                    break;
                }
            }
            if( begin != s.length()-1 )
                ans += '-';
            curr = 0;
            for( i = begin+1; i < s.length(); i++ ){
                if( curr < k && s[i] != '-' ){
                    ans += s[i];
                    curr++;
                }
                else if( curr == k && s[i] != '-' ){
                    ans += '-';
                    curr = 0;
                    if( s[i] != '-' )
                        i--;
                }
            }
        }

        return ans;
    }
};
